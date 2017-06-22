#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

#define PIN_ANALOG_X 0

#define PIN_ANALOG_Y 1


#define BUTTON_UP 2

#define BUTTON_RIGHT 3

#define BUTTON_DOWN 4

#define BUTTON_LEFT 5

#define BUTTON_E 6

#define BUTTON_F 7



#define DELAY 500



void setup() {

 lcd.begin();


 pinMode(BUTTON_UP, INPUT);

 digitalWrite(BUTTON_UP, HIGH);



 pinMode(BUTTON_RIGHT, INPUT);

 digitalWrite(BUTTON_RIGHT, HIGH);



 pinMode(BUTTON_DOWN, INPUT);

 digitalWrite(BUTTON_DOWN, HIGH);



 pinMode(BUTTON_LEFT, INPUT);

 digitalWrite(BUTTON_LEFT, HIGH);



 pinMode(BUTTON_E, INPUT);

 digitalWrite(BUTTON_E, HIGH);



 pinMode(BUTTON_F, INPUT);

 digitalWrite(BUTTON_F, HIGH);

}



void loop() {
  lcd.home();
   lcd.print("X:");

 lcd.print(analogRead(PIN_ANALOG_X));
 lcd.print("     Y:");

 lcd.print(analogRead(PIN_ANALOG_Y));
 delay(DELAY);

 if(digitalRead(BUTTON_UP) == LOW) {

   lcd.setCursor(4,4);
   lcd.print("Button A");

   delay(DELAY);

 }

 else if(digitalRead(BUTTON_RIGHT) == LOW) {
  
    lcd.setCursor(4,4);
   lcd.print("Button B");

   delay(DELAY);

 }

 else if(digitalRead(BUTTON_DOWN) == LOW) {
   lcd.setCursor(4,4);
   lcd.print("Button C");

   delay(DELAY);

 }

 else if(digitalRead(BUTTON_LEFT) == LOW) {
     lcd.setCursor(4,4);
   lcd.print("Button D");

   delay(DELAY);

 }

 else if(digitalRead(BUTTON_E) == LOW) {
lcd.setCursor(4,4);
  lcd.print("Button E");

   delay(DELAY);

 }

 else if(digitalRead(BUTTON_F) == LOW) {
lcd.setCursor(4,4);
  lcd.print("Button F");

   delay(DELAY);

 }
lcd.clear();
}
