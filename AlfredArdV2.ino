#include "Arduino.h"
#include "Adafruit_FONA.h"
#include "EasyVR.h"
#include <Bridge.h>
#include <YunServer.h>
#include <YunClient.h>

#define PORT 6666

YunServer server(PORT);

#if !defined(SERIAL_PORT_MONITOR)
#error "Arduino version not supported. Please update your IDE to the latest version."
#endif
#if defined(SERIAL_PORT_USBVIRTUAL)
#define port SERIAL_PORT_HARDWARE
#define pcSerial SERIAL_PORT_USBVIRTUAL
#else
#include "SoftwareSerial.h"
SoftwareSerial port(12, 13);
#define pcSerial SERIAL_PORT_MONITOR
#endif

EasyVR easyvr(port);
#define FONA_RX 9
#define FONA_TX 10
#define FONA_RST 4

char replybuffer[255];
#include <SoftwareSerial.h>

SoftwareSerial fonaSS = SoftwareSerial(FONA_TX, FONA_RX);
SoftwareSerial *fonaSerial = &fonaSS;

Adafruit_FONA fona = Adafruit_FONA(FONA_RST);
uint8_t readline(char *buff, uint8_t maxbuff, uint16_t timeout = 0);
uint8_t type;
int rooms[4] = {22, 24, 26, 28}, errCount = 0;
bool states[4], doorState;

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

void checkNetwork() {
  uint8_t n = fona.getNetworkStatus();
  Serial.print(F("Network status "));
  Serial.print(n);
  Serial.print(F(": "));
  if (n == 0) Serial.println(F("Not registered"));
  if (n == 1) Serial.println(F("Registered (home)"));
  if (n == 2) Serial.println(F("Not registered (searching)"));
  if (n == 3) Serial.println(F("Denied"));
  if (n == 4) Serial.println(F("Unknown"));
  if (n == 5) Serial.println(F("Registered roaming"));
  n = fona.getRSSI();
  int8_t r;
  Serial.print(F("RSSI = ")); Serial.print(n); Serial.print(": ");
  if (n == 0) r = -115;
  if (n == 1) r = -111;
  if (n == 31) r = -52;
  if ((n >= 2) && (n <= 30))
	r = map(n, 2, 30, -110, -54);
  Serial.print(r); Serial.println(F(" dBm"));
}

char numbers[1][30] = {"3056194849          	"};

void playTone() {
  if (! fona.playToolkitTone(1, 1000))
	Serial.println(F("Failed"));
  else
	Serial.println(F("OK!"));
}

void flushSerial() {
  while (Serial.available())
	Serial.read();
}

void opening() {
  if (digitalRead(20) != LOW) {
	Serial.println("OPEN!");
	easyvr.playSound(5, EasyVR::VOL_FULL); // DOOR OPEN
  } else {
	easyvr.playSound(4, EasyVR::VOL_FULL); // DOOR CLOSE
	Serial.println("CLOSED!");
  }
}

void garageDoor() {
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(8, LOW);
}

//Groups and Commands
enum Groups { GROUP_0  = 0, GROUP_1  = 1,};
enum Group0 { G0_ALFRED = 0, };
enum Group1 { G1_CALL_ROY = 0, G1_HANGUP = 1, G1_BEDROOM_LIGHT = 2, G1_KITCHEN_LIGHT = 3, G1_GARAGE_DOOR = 4, G1_LIVINGROOM_LIGHT = 5, G1_BATHROOM_LIGHT = 6, G1_SECURITY_STATUS = 7,};

int8_t group, idx;

void action() {
  switch (group) {
	case GROUP_0:
  	switch (idx) {
    	case G0_ALFRED:
      	group = GROUP_1; //<-- or jump to another group X for composite commands
      	break;
  	}
  	break;
	case GROUP_1:
  	switch (idx) {
    	case G1_CALL_ROY:
      	group = GROUP_0; //<-- or jump to another group X for composite commands
      	Serial.print(F("Calling\n"));
      	if (!fona.callPhone(numbers[0]))
        	Serial.println(F("Failed"));
      	else
        	Serial.println(F("Sent!"));
      	flushSerial();
      	break;
    	case G1_HANGUP:
      	group = GROUP_0; //<-- or jump to another group X for composite commands
      	if (! fona.hangUp())
        	Serial.println(F("Failed"));
      	else
        	Serial.println(F("OK!"));
      	flushSerial();
      	break;
    	case G1_BEDROOM_LIGHT:
      	group = GROUP_0; //<-- or jump to another group X for composite commands
      	lightControl(0);
      	break;
    	case G1_KITCHEN_LIGHT:
      	group = GROUP_0; //<-- or jump to another group X for composite commands
      	lightControl(1);
      	break;
    	case G1_GARAGE_DOOR:
      	group = GROUP_0; //<-- or jump to another group X for composite commands
      	garageDoor();
      	break;
    	case G1_LIVINGROOM_LIGHT:
      	group = GROUP_0; //<-- or jump to another group X for composite commands
      	lightControl(2);
      	break;
    	case G1_BATHROOM_LIGHT:
      	group = GROUP_0; //<-- or jump to another group X for composite commands
      	lightControl(3);
      	break;
    	case G1_SECURITY_STATUS:
      	group = GROUP_0; //<-- or jump to another group X for composite commands
      	opening();
      	break;
  	}
  	break;
  }
}

void setup() {
  Serial.begin(115200);
  Bridge.begin();

  server.noListenOnLocalhost();
  server.begin();
  //while (!Serial);
  //Serial.begin(115200);
  flushSerial();
  Serial.println(F("FONA basic test"));
  Serial.println(F("Initializing....(May take 3 seconds)"));
  fonaSerial->begin(4800);
  if (! fona.begin(*fonaSerial)) {
	Serial.println(F("Couldn't find FONA"));
	while (1);
  }
  type = fona.type();
  Serial.println(F("FONA is OK"));
  Serial.print(F("Found "));
  switch (type) {
	case FONA800L:
  	Serial.println(F("FONA 800L")); break;
	case FONA800H:
  	Serial.println(F("FONA 800H")); break;
	case FONA808_V1:
  	Serial.println(F("FONA 808 (v1)")); break;
	case FONA808_V2:
  	Serial.println(F("FONA 808 (v2)")); break;
	case FONA3G_A:
  	Serial.println(F("FONA 3G (American)")); break;
	case FONA3G_E:
  	Serial.println(F("FONA 3G (European)")); break;
	default:
  	Serial.println(F("???")); break;
  	char imei[15] = {0}; // MUST use a 16 character buffer for IMEI!
  	uint8_t imeiLen = fona.getIMEI(imei);
  	if (imeiLen > 0) {
    	Serial.print("Module IMEI: ");
    	Serial.println(imei);
  	}
  	Serial.println((! fona.setAudio(FONA_EXTAUDIO)) ? F("Failed") : F("OK!"));
  	fona.setMicVolume(FONA_EXTAUDIO, 10);
  	if ( (type == FONA3G_A) || (type == FONA3G_E) )
    	Serial.println((! fona.setVolume(8)) ? F("Failed") : F("OK!"));
  	else
    	Serial.println((! fona.setVolume(100)) ? F("Failed") : F("OK!"));
  }
  if (! fona.setAudio(FONA_EXTAUDIO)) {
	Serial.println(F("Failed"));
  } else {
	Serial.println(F("OK!"));
  }
  flushSerial();
  pcSerial.begin(9600);
  pinSetup();
  int mode = easyvr.bridgeRequested(pcSerial);
  doorState = 0;
  switch (mode) {
	case EasyVR::BRIDGE_NONE:
  	port.begin(9600);
  	pcSerial.println(F("---"));
  	pcSerial.println(F("Bridge not started!"));
  	break;
	case EasyVR::BRIDGE_NORMAL:
  	port.begin(9600);
  	easyvr.bridgeLoop(pcSerial);
  	pcSerial.println(F("---"));
  	pcSerial.println(F("Bridge connection aborted!"));
  	break;
	case EasyVR::BRIDGE_BOOT:
  	port.begin(115200);
  	easyvr.bridgeLoop(pcSerial);
  	pcSerial.println(F("---"));
  	pcSerial.println(F("Bridge connection aborted!"));
  	break;
  }
  while (!easyvr.detect()) {
	Serial.println("EasyVR not detected!");
	delay(1000);
  }
  easyvr.setPinOutput(EasyVR::IO1, LOW);
  Serial.println("EasyVR detected!");
  easyvr.setTimeout(5);
  easyvr.setLanguage(0);
  group = EasyVR::TRIGGER; //<-- start group (customize)
}

void loop() {
  YunClient client = server.accept();

  if (client.connected()) {
	Serial.println("CLIENT CONNECTED!");

	String string = "";

	while (client.connected()) {
  	if (client.available()) {
    	easyvr.setPinOutput(EasyVR::IO1, HIGH); // LED on (listening)
    	Serial.print("Say a command in Group ");
    	Serial.println(group);
    	easyvr.recognizeCommand(group);
    	do {
      	if (!doorState && digitalRead(20) != LOW) {
        	Serial.println("OPEN!");
        	//easyvr.playSound(5, EasyVR::VOL_FULL); // DOOR OPEN
        	doorState = (doorState) ? 0 : 1;
      	} else if (doorState && digitalRead(20) != HIGH) {
        	Serial.println("CLOSED!");
        	doorState = (doorState) ? 0 : 1;
      	}
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
    	} while (!easyvr.hasFinished());
    	easyvr.setPinOutput(EasyVR::IO1, LOW); // LED off
    	idx = easyvr.getWord();
    	if (idx >= 0) {
      	// built-in trigger (ROBOT)
      	// group = GROUP_X; <-- jump to another group
      	return;
    	}
    	idx = easyvr.getCommand();
    	if (idx >= 0) {
      	// print debug message
      	uint8_t train = 0;
      	char name[32];
      	Serial.print("Command: ");
      	Serial.print(idx);
      	if (easyvr.dumpCommand(group, idx, name, train)) {
        	Serial.print(" = ");
        	Serial.println(name);
      	} else
        	Serial.println();
      	easyvr.playSound(0, EasyVR::VOL_FULL);
      	action();
    	} else {
      	if (easyvr.isTimeout()) {
        	Serial.println("Timed out, try again...");
        	group = GROUP_0;
      	}
      	int16_t err = easyvr.getError();
      	if (err >= 0) {
        	Serial.print("Error ");
        	Serial.println(err, HEX);
        	if (errCount >= 2) {
          	group = GROUP_0;
          	errCount = 0;
        	}
        	errCount++;
      	}
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

