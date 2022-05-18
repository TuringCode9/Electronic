#include<LiquidCrystal_I2C.h>     // Indica que debe buscar en  todo mi sistema esa biblioteca (LiquidCrystal)
//#include "LiquidCrystal.h"    // Busca donde se guardo mi proyecto y luego en en mi sistema.

// Creando un objeto.
LiquidCrystal_I2C lcd(12,11,5,4,3,2);// RS,E,D4,D5,D6,D7

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(5,0);
  lcd.print("Hola mundo");
}

void loop() {
  // put your main code here, to run repeatedly:
     

  
}
