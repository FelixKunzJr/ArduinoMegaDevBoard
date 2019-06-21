#include "MegaDevBoard.h"


int incomingByte = 0;   // for incoming serial data

uint8_t i = 0b00000000;

void setup() {
  // put your setup code here, to run once:

  LEDDirection = 0xFF;
  SwitchDirection = 0x00;
  
Serial.begin(9600);
Serial1.begin(9600);
//Serial2.begin(9600);
Serial3.begin(9600);

}

void loop() {

if(Serial1.available()>0) {
  // Serial.print("Serial1");
   Serial.println(Serial1.read(),BIN);
   
  }
//Serial.print("serial");
//Serial.println(SwitchRead);

//Serial2.println(SwitchRead,DEC);

Serial1.print(2,BIN);

LEDWrite = SwitchRead;
Serial.print(SwitchRead);


if(!digitalRead(Button1)){
  LEDWrite = 255;
}

if(!digitalRead(Button2)){
  LEDWrite = 0;
}



}
