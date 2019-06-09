//define LED
#define LED1 23
#define LED2 22
#define LED3 25
#define LED4 24
#define LED5 27
#define LED6 26
#define LED7 29
#define LED8 28           //This has to be changed in V2
#define LEDWrite PORTA
#define LEDRead PINA
#define LEDDirection DDRA

//define Switch
#define SW1 37
#define SW2 36
#define SW3 35
#define SW4 34
#define SW5 33
#define SW6 32
#define SW7 31
#define SW8 30
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
#define Button1 38
#define Button2 39



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

if(!digitalRead(Button1)){
  LEDWrite = 255;
}

if(!digitalRead(Button2)){
  LEDWrite = 0;
}



}
