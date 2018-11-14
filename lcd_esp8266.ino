#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);



void setup()
{

}
void loop()
{

lcd.begin();
lcd.backlight(); // เปิดไฟ backlight
lcd.setCursor(4, 0); // ไปที่ตัวอักษรที่ 4 บรรทัดที่ 0
lcd.print("LCD ESP8266");
lcd.setCursor(2, 1); // ไปที่ตัวอักษรที่ 0 บรรทัดที่ 1
lcd.print("BY ArduinoALL");
}


