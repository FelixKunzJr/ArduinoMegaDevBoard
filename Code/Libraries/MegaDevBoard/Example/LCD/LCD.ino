#include <MegaDevBoard.h>


#include <LiquidCrystal.h>

LiquidCrystal lcd(LCDRs, LCDEn, LCD4, LCD5, LCD6, LCD7);



void setup() {
  
  LCDinit();
  lcd.begin(16,2);
  
  lcd.print("011001ENTER10010");

}

void loop() {

  lcd.setCursor(0,2);
  lcd.print(millis()/1000);
}
