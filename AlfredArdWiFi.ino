#include <Bridge.h>
#include <YunServer.h>
#include <YunClient.h>

#define PORT 6666

int rooms[4] = {22, 24, 26, 28}, errCount = 0;
bool states[4], doorState, alfred_init;

YunServer server(PORT);

void pinSetup() {
  digitalWrite(8, LOW);
  pinMode(8, OUTPUT);
  pinMode(20, INPUT);
  digitalWrite(20, HIGH);
  for (int i = 22; i < 30; i++) {
  pinMode(i, OUTPUT);
  if (i % 2 == 0) digitalWrite(i, HIGH);
  }
}
bool lightControl(int sig) {
  if (states[sig]) {
  digitalWrite((rooms[sig] + 1), LOW);
  digitalWrite(rooms[sig], HIGH);
  } else {
  digitalWrite(rooms[sig], LOW);
  digitalWrite((rooms[sig] + 1), HIGH);
  }
  states[sig] = (states[sig]) ? 0 : 1;
}

void setup() {
  Serial.begin(115200);
  Bridge.begin();

  server.noListenOnLocalhost();
  server.begin();
  //pinSetup();
}
void opening() {
  if (digitalRead(20) != LOW) {
  Serial.println("OPEN!");
  //easyvr.playSound(5, EasyVR::VOL_FULL); // DOOR OPEN
  } else {
  //easyvr.playSound(4, EasyVR::VOL_FULL); // DOOR CLOSE
  Serial.println("CLOSED!");
  }
}

void garageDoor() {
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(8, LOW);
}

void loop() {
  YunClient client = server.accept();

  if (client.connected()) {
    Serial.println("CLIENT CONNECTED!");

    String string = "";
    pinSetup();
    while (client.connected()) {
      if (client.available()) {
        char received = client.read();
        if (received != '\n' && received != 4) {
          string += received;
        }
        if (received == '\n') {
          int val = atoi(&string[0]);
          switch (val) {
            case 0:
              lightControl(0);
              break;
            case 1:
              lightControl(1);
              break;
            case 2:
              lightControl(2);
              break;
            case 3:
              lightControl(3);
              break;
            case 4:
              garageDoor();
              break;
            case 5:
              opening();
              break;
          }
          Serial.println(val);
          string = "";
        }
        if (received == 4) {
          break;
        }
      }
    }
    client.stop();

  }
  else {
    Serial.println("no client connected, retrying");
  }

  delay(1000);

}


