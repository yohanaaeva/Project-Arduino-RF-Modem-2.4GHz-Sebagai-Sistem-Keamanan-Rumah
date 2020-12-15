#include <LiquidCrystal.h>
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);


void setup() {

  lcd.begin(16,2);
  Serial.begin(9600);
  lcd.setCursor(0,0);
  lcd.print("SECURITY SYSTEM");
  lcd.setCursor(0,1);
  lcd.print("OF RESTRICTED AREA");
  delay(100);
}

void loop() {

  int PIR_sensor_SERIAL_BYTE = Serial.read();;
  if(PIR_sensor_SERIAL_BYTE == 10)
  {
    lcd.clear();
    Serial.print("PIRSENSOR:");
    Serial.println(PIR_sensor_SERIAL_BYTE);
    lcd.setCursor(0,1);
    lcd.print("SECURITY BREAK");
    delay(50);
  }
  else if(PIR_sensor_SERIAL_BYTE == 20)
  {
    lcd.clear();
    Serial.print("PIRSENSOR:");
    Serial.println(PIR_sensor_SERIAL_BYTE);
    lcd.setCursor(0,1);
    lcd.print("SYSTEM SECURED");
    delay(50); 
  }
}
