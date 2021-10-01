
//Wifi Configuration
char auth[] = ""; //Blynk auth email code
char ssid[] = ""; //Wifi id
char pass[] = ""; //Wifi password


#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SPI.h>
#include <DHT.h>


#define DHTPIN 5
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

BlynkTimer timer;
char t[5];
int a;

void sendSensor(){
  int h = dht.readHumidity();
  float t1 = dht.readTemperature();
  dtostrf(t1, 2, 1, t);
  Blynk.virtualWrite(V5, h);
  Blynk.virtualWrite(V6, t);
}

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  timer.setInterval(1000L, sendSensor);
  pinMode(D5, OUTPUT);//Relay
  pinMode(D3, OUTPUT);
  WidgetLED led1(V1);
  pinMode(D4, OUTPUT);
  pinMode(D0, OUTPUT);

}

void lettura(){
  a = digitalRead(D5);
  if(a==1){
   WidgetLED led1(V1);
   led1.on();
   digitalWrite(D3, HIGH); 
  }
  if(a==0){
   WidgetLED led1(V1); 
   led1.off();
   digitalWrite(D3, LOW);
  }
}

void loop(){
  Blynk.run();
  timer.run();
  lettura();
  digitalWrite(D0, LOW);
  digitalWrite(D4, LOW);
}
