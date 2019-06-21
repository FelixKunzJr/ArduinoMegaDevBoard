#include <LiquidCrystal.h>



const int rs = A15, en = A13, d4 = 53, d5 = 52, d6 = 51, d7 = 50;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.clear();
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
  pinMode(A15, OUTPUT);
  pinMode(A14, OUTPUT);
  pinMode(A13, OUTPUT);
  
  pinMode(53, OUTPUT);

  pinMode(52, OUTPUT);

  pinMode(51, OUTPUT);
    pinMode(50, OUTPUT);




  digitalWrite(A14,LOW);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
   //lcd.setCursor(0, 1);
   lcd.print("Hello  World2!");
   delay(1000);
   lcd.clear();
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
}
