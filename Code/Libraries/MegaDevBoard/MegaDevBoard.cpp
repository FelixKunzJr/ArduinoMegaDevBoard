#include "MegaDevBoard.h"
#include "Arduino.h"
#include "LiquidCrystal.h"



void LCDinit(){

  pinMode(LCDRs, OUTPUT);
  pinMode(LCDEn, OUTPUT);
  pinMode(LCDRw, OUTPUT);

  pinMode(LCD4, OUTPUT);
  pinMode(LCD6, OUTPUT);
  pinMode(LCD6, OUTPUT);
  pinMode(LCD6, OUTPUT);

  digitalWrite(LCDRw,LOW);




}
