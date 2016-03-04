#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>

SoftwareSerial MP3Serial(10, 11); // RX, TX

void setup() {
 
 Serial.begin (9600);
 MP3Serial.begin (9600);
 mp3_set_serial (MP3Serial); //set Serial for DFPlayer-mini mp3 module 
 mp3_set_volume (10);
}

void loop() {


int i = 0;

while (digitalRead(8)==HIGH) {
  mp3_play(1);
  i++;
  Serial.print("sending ");
  Serial.println(i);
}

delay(500);

}
