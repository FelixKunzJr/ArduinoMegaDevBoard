//define LED
#define LED1 23
#define LED2 22
#define LED3 25
#define LED4 24
#define LED5 27
#define LED6 26
#define LED7 29
#define LED8 28           //This has to be changed in V2
#define LEDPort PORTA

//define Button
#define Button1 37
#define Button2 36
#define Button3 35
#define Button4 34
#define Button5 33
#define Button6 32
#define Button7 31
#define Button8 30
#define ButtonPort PORTC


//define FER 201
#define Ch1 49
#define Ch2 48
#define Ch3 47
#define Ch4 46
#define Ch5 45
#define Ch6 44
#define Ch7 43
#define Ch8 42
#define ChPort PORTL

#define PI 40
#define PR 41

//define Tactile
#define Tactile1 38
#define Tactile2 39






void setup() {
  // put your setup code here, to run once:

  DDRC = 0x00;
Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(Button1));

}
