#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define pwm 14

#define D0 16

int i = 0 ;
int j = 0;

void setup()
{
    Serial.begin(115200);
    lcd.begin();
    lcd.backlight(); // เปิดไฟ backlight
    pinMode(pwm,INPUT);
    pinMode(D0,INPUT);
}
void loop()
{
  

  if(digitalRead(D0) == 1)
      {
        
    digitalWrite(D0,HIGH);
    Serial.println("OFF LDR"); 
    lcd.begin();
    lcd.setCursor(1, 0); // ไปที่ตัวอักษรที่ 1 บรรทัดที่ 0
    lcd.print("3DPRINTER DESS");
    lcd.setCursor(2, 1); // ไปที่ตัวอักษรที่ 2 บรรทัดที่ 1
    lcd.print("STATUS 3D OFF");
    analogWrite(pwm,0);
    Serial.println("FAN high");

      }
    
  

  if (digitalRead(D0) == 0)
    {
      
    digitalWrite(D0,LOW);
    Serial.println("ON LDR"); 
    lcd.begin();
    lcd.setCursor(1, 0); // ไปที่ตัวอักษรที่ 1 บรรทัดที่ 0
    lcd.print("3DPRINTER DESS");
    lcd.setCursor(2, 1); // ไปที่ตัวอักษรที่ 2 บรรทัดที่ 1
    lcd.print("STATUS 3D ON");
    analogWrite(pwm,1024);
    Serial.println("FAN low");
    
    }
  

}
  



