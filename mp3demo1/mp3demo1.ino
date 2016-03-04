#include <SoftwareSerial.h>
#include <dfplayer_mini_mp3.h>

void setup() {
  // put your setup code here, to run once:
 Serial.begin (9600);
 mp3_set_serial (11); //set Serial for DFPlayer-mini mp3 module 
 mp3_set_volume (10);
}

void loop() {
  // put your main code here, to run repeatedly:

while (digitalRead(8)==LOW) {
  mp3_play(1);
  Serial.println("sending");
}
while (digitalRead(8)==HIGH) {
  Serial.println("playing");
}

}
