
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
    // Print a message to the LCD.
  lcd.print("Hola mundo!");
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print("ten un lindo dia");
  
  delay(10000);
  lcd.clear();
  
  lcd.blink();
  delay(3000);
  lcd.noBlink();
  
  lcd.setCursor(1,0);
  lcd.print("Programar");
  delay(5000);
  lcd.setCursor(2,1);
  lcd.print("Es genial :)");
  delay(5000);
  lcd.clear();
  
  lcd.blink();
  delay(3000);

}
 