package com.alfred.alfred;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;


import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.SocketException;
import java.net.UnknownHostException;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.atomic.AtomicBoolean;

import android.view.View;
import android.widget.Button;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;

import org.apache.http.HttpResponse;
import org.apache.http.client.ClientProtocolException;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;
import org.apache.http.util.EntityUtils;

import org.json.JSONObject;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Bundle;
import android.text.format.Formatter;
import android.util.Log;
import android.view.Menu;
import android.widget.EditText;
import android.widget.SeekBar;
import android.widget.SeekBar.OnSeekBarChangeListener;


public class MainActivity extends AppCompatActivity {

   private final static String TAG = ">==< ArduinoYun >==<";
   private String ARDUINO_IP_ADDRESS = "10.0.0.20";
   private final static int PORT = 6666;

   private Button mBedroomButton, mKitchenButton, mLivingRoomButton, mBathRoomButton, mGarageButton, mSecurityButton;
   private EditText editTextIPAddress;
   SharedPreferences.Editor editor;
   SharedPreferences sharedPreferences;

   @Override
   protected void onCreate(Bundle savedInstanceState) {
       super.onCreate(savedInstanceState);
       setContentView(R.layout.activity_main);
       sharedPreferences = getSharedPreferences("HTTP_HELPER_PREFS", Context.MODE_PRIVATE);
       editTextIPAddress = (EditText)findViewById(R.id.editTextIPAddress);
       editTextIPAddress.setText(sharedPreferences.getString(ARDUINO_IP_ADDRESS,""));
       mBedroomButton = (Button) findViewById(R.id.BedRoom);
       mBedroomButton.setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View v) {
               mQueue.offer(0);
           }
       });
       mKitchenButton = (Button) findViewById(R.id.Kitchen);
       mKitchenButton.setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View v) {
               mQueue.offer(1);
           }
       });
       mLivingRoomButton = (Button) findViewById(R.id.LivingRoom);
       mLivingRoomButton.setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View v) {
               mQueue.offer(2);
           }
       });
       mBathRoomButton = (Button) findViewById(R.id.BathRoom);
       mBathRoomButton.setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View v) {
               mQueue.offer(3);
           }
       });
       mGarageButton = (Button) findViewById(R.id.Garage);
       mGarageButton.setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View v) {
               mQueue.offer(4);
           }
       });
       mSecurityButton = (Button) findViewById(R.id.Security);
       mSecurityButton.setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View v) {
               mQueue.offer(5);
           }
       });
/*
       mSeekBar = (SeekBar) findViewById(R.id.seekBar);
       mSeekBar.setOnSeekBarChangeListener(new OnSeekBarChangeListener() {
           @Override
           public void onStopTrackingTouch(SeekBar seekBar) {
           }

           @Override
           public void onStartTrackingTouch(SeekBar seekBar) {
           }

           @Override
           public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
               mQueue.offer(progress);
           }
       });*/

   }

   @Override
   protected void onStart() {
       mStop.set(false);
       if(sNetworkThread == null){
           sNetworkThread = new Thread(mNetworkRunnable);
           sNetworkThread.start();
       }
       super.onStart();
   }

   @Override
   protected void onStop() {
       mStop.set(true);
       mQueue.clear();
       mQueue.offer(-1);
       if(sNetworkThread != null) sNetworkThread.interrupt();
       super.onStop();
   }

   @Override
   public boolean onCreateOptionsMenu(Menu menu) {
       // Inflate the menu; this adds items to the action bar if it is present.
       getMenuInflater().inflate(R.menu.main, menu);
       return true;
   }

   private ArrayBlockingQueue<Integer> mQueue = new ArrayBlockingQueue<>(100);
   private AtomicBoolean mStop = new AtomicBoolean(false);

   private OutputStream mOutputStream = null;

   private Socket mSocket = null;

   private static Thread sNetworkThread = null;
   private final Runnable mNetworkRunnable = new Runnable() {

       @Override
       public void run() {
           log("starting network thread");

           try {
               mSocket = new Socket(ARDUINO_IP_ADDRESS, PORT);
               mOutputStream = mSocket.getOutputStream();
           } catch (UnknownHostException e1) {
               e1.printStackTrace();
               mStop.set(true);
           } catch (IOException e1) {
               e1.printStackTrace();
               mStop.set(true);
           }

           mQueue.clear(); // we only want new values

           try {
               while(!mStop.get()){
                   int val = mQueue.take();
                   if(val >= 0){
                       log("sending value "+val);
                       mOutputStream.write((val+"\n").getBytes());
                   }
               }
           } catch (IOException e) {
               e.printStackTrace();
           } catch (InterruptedException e) {
               e.printStackTrace();
           } finally{
               try {
                   mStop.set(true);
                   if(mOutputStream != null) mOutputStream.close();
                   if(mSocket != null) mSocket.close();
               } catch (IOException e) {
                   e.printStackTrace();
               }
           }

           log("returning from network thread");
           sNetworkThread = null;
       }
   };

   public void log(String s){
       Log.d(TAG, s);
   }

}

