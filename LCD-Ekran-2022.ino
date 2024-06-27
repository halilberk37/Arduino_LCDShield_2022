
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); // Bu kodu kullanırken ekranda yazı çıkmaz ise 0x27 yerine 0x3f yazınız !!
void setup() {
// initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();

}

void loop(){
int i;
lcd.setCursor(1,0); // İlk satırın başlangıç noktası
lcd.print("iyi ki dogdun"); 
lcd.setCursor(4,1); // İlk satırın başlangıç noktası
lcd.print("BEREN"); 
delay(5000);
for(i=0; i<17; i++)
{
  lcd.setCursor(i,1); // İkinci satırın başlangıç noktası, for döngüsü sayesinde bu sütun sürekli kayacaktır
  lcd.print("BEREN TAN");
  delay(500);
  lcd.setCursor(i,1);
  lcd.print(" ");
 
}


lcd.clear();
lcd.setCursor(0,0); // İlk satırın başlangıç noktası
lcd.print("OSMAN TAN"); 
delay(1000);

lcd.clear();
lcd.setCursor(6,1); // İlk satırın başlangıç noktası
lcd.print("DEMET TAN"); 
delay(1000);


lcd.clear();
lcd.setCursor(0,1); // İlk satırın başlangıç noktası
lcd.print("BERKE TAN"); 
delay(1000);
lcd.clear();

lcd.setCursor(8,0); // İlk satırın başlangıç noktası
lcd.print("Nice");
delay(1000);
lcd.noBacklight();
lcd.clear();
delay(200);
lcd.backlight();
lcd.setCursor(1,1); // İlk satırın başlangıç noktası
lcd.print("Mutlu");
delay(1000);
lcd.noBacklight();
lcd.clear();
delay(200);
lcd.backlight();
lcd.setCursor(6,1); // İlk satırın başlangıç noktası
lcd.print("Senelere");
delay(1000);
lcd.noBacklight();
lcd.clear();
delay(200);
lcd.backlight();


}
