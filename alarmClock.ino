#include <LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int hour = 13;
int minute = 11;
int halfMin = 30000;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 lcd.begin(16, 1);
}

void loop() {
  lcd.setCursor(5,0);
  lcd.print(hour);
  lcd.print(":");
  lcd.print(minute);
  
while(true){
  minute ++;
  delay(halfMin);
  delay(halfMin);
  
    if(minute == 60){
      hour++;
      minute = 0;
    }
    if(hour == 24){
      hour = 00;
    }
      if(minute <= 9){
      lcd.clear();
      lcd.setCursor(5,0);
      lcd.print(hour);
      lcd.print(":");
      lcd.print("0");
      lcd.print(minute);
      }
      else{
      lcd.clear();
      lcd.setCursor(5,0);
      lcd.print(hour);
      lcd.print(":");
      lcd.print(minute);
      }
  }
}
