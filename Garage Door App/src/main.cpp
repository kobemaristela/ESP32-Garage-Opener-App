#include <Arduino.h>
#include <ESPAsyncWebServer.h>
#include <WiFi.h>
#include <stdio.h>
#include <stdlib.h>
#include <credentials.h>


/**
 * @Setup WiFi Credentials
 **/

char* ssid = mySSID;
char* password = myPassword;

void setup() {
  Serial.begin(9600);
  delay(1000);

  /**
   * Initialize Wi-Fi connection
  */

  WiFi.begin(ssid, password);
  Serial.printf("\nConnecting to %s", mySSID);


  while(WiFi.status() != WL_CONNECTED){
      Serial.print(".");
      delay(100);
  }

  Serial.println("\nConnected to the WiFi network");
  Serial.print("Local ESP32 IP: ");
  Serial.println(WiFi.localIP());

  
}

void loop() {
  // put your main code here, to run repeatedly:
}