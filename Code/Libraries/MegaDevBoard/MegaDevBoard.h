#ifndef MegaDevBoard
#define MegaDevBoard
#include "Arduino.h"
#include "LiquidCrystal.h"
#include <Wire.h>

//define LED
#define LED1 22
#define LED2 23
#define LED3 24
#define LED4 25
#define LED5 26
#define LED6 27
#define LED7 28
#define LED8 29           //This has to be changed in V2
#define LEDWrite PORTA
#define LEDRead PINA
#define LEDDirection DDRA

//define Switch
#define SW1 digitalRead(37)
#define SW2 digitalRead(36)
#define SW3 digitalRead(35)
#define SW4 digitalRead(34)
#define SW5 digitalRead(33)
#define SW6 digitalRead(32)
#define SW7 digitalRead(31)
#define SW8 digitalRead(30)
#define SwitchWrite PORTC
#define SwitchRead PINC
#define SwitchDirection DDRC


//define FER 201
#define Ch1 49
#define Ch2 48
#define Ch3 47
#define Ch4 46
#define Ch5 45
#define Ch6 44
#define Ch7 43
#define Ch8 42
#define ChWrite PORTL
#define ChRead PINL
#define ChDirection DDRL

#define PI 40
#define PR 41

//define Tactile
#define Button1 !digitalRead(38)
#define Button2 !digitalRead(39)

//define LCD

#define LCDRs A15
#define LCDRw A14
#define LCDEn A13
#define LCD4 53
#define LCD5 52
#define LCD6 51
#define LCD7 50



void LCDinit();


#endif
