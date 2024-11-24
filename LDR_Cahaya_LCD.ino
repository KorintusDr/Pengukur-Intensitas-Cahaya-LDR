#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int LDR_Pin = A0;
LiquidCrystal_I2C lcd(0x27, 16, 2);

String getLightCategory(int intensity) {
  if (intensity <= 10) {
    return "Gelap";
  } else if (intensity <= 30) {
    return "Redup";
  } else if (intensity <= 50) {
    return "Sedang";
  } else if (intensity <= 80) {
    return "Terang";
  } else {
    return "Sangat Terang";
  }
}

void setup() {
  lcd.begin(16, 2); 
  lcd.setBacklight(1);  
  lcd.print("Cahaya: ");
}

void loop() {
  int LDR_Value = analogRead(LDR_Pin);  
  int intensity = map(LDR_Value, 0, 1023, 0, 100);

  String lightCategory = getLightCategory(intensity);

  lcd.setCursor(0, 1); 
  lcd.print(lightCategory);  
  lcd.print("        ");  

  lcd.setCursor(0, 0);
  lcd.print("Intensitas: ");
  lcd.print(intensity);  
  lcd.print("%");
  
  delay(500);
}
