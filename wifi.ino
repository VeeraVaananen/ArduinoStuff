//Test code to connect Arduino Uno R3 and NodeMCU with logic level converter
//Code 2

#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>

SoftwareSerial NodeMCU(D2,D3);

void setup(){
	Serial.begin(9600);
	NodeMCU.begin(4800);
	pinMode(D2,INPUT);
	pinMode(D3,OUTPUT);
}

void loop(){
	int i = 10101;
	NodeMCU.print(i);
	NodeMCU.println("\n");
	delay(300);
}
