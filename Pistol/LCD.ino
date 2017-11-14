//Custom Characters for LCD

uint8_t bell[8]  = {0x4,0xe,0xe,0xe,0x1f,0x0,0x4};
uint8_t emptyHeart[8]  = {0x00,0x0A,0x15,0x11,0x0A,0x04,0x00,0x00};
uint8_t cross[8] = {0x04,0x04,0x1F,0x04,0x04,0x04,0x04,0x00};
uint8_t flag[8] = {0x1C,0x1F,0x1F,0x13,0x10,0x10,0x10,0x00};
uint8_t clip[8]  = {0x1C,0x14,0x14,0x12,0x0A,0x0A,0x0F,0x00};
uint8_t heart[8] = {0x0,0xa,0x1f,0x1f,0xe,0x4,0x0};
uint8_t crosshair[8] = {0x00, 0x0E, 0x15, 0x1F, 0x15, 0x0E, 0x00, 0x00};
uint8_t bullet[8] = {0x0E, 0x1F, 0x1D, 0x1D, 0x1F, 0x1F, 0x0E, 0x1F};

void initaliseLCD(){
  // initialize the LCD
  lcd.init();
  lcd.begin(16, 2);
  delay(100);
  lcd.blink();
  lcd.clear();
  lcd.backlight();

  lcd.print("Startup");    delay(250);    lcd.print('.');    delay(250);    lcd.print('.');    delay(250);    lcd.print('.');    delay(250);

  lcd.createChar(0, bell);
  lcd.createChar(1, emptyHeart);
  lcd.createChar(2, cross);
  lcd.createChar(3, flag);
  lcd.createChar(4, clip);
  lcd.createChar(5, heart);
  lcd.createChar(6, crosshair);
  lcd.createChar(7, bullet);
  lcd.home();

  lcd.clear();
  lcd.print("Team:"                 + String(myTeamID));
  lcd.setCursor(0, 1);
  lcd.print("Player:"               + String(myPlayerID));
  delay(500); 
  
  lcd.clear();
  lcd.print("myWeaponHP:"           + String(myWeaponDamage));
  lcd.setCursor(0, 1);
  lcd.print("maxAmmo:"              + String(maxAmmo));
  delay(500);

  lcd.clear();
  lcd.print("maxAmmoClips:"         + String(maxAmmoClips));
  lcd.print("maxHP:"                + String(maxHp));
  delay(500);
  lcd.noBlink();
}

void updateLCD(){
  //check we are not dead

  //clear screen
  lcd.clear();
  lcd.home();

  lcd.print("HP ");
  for(int i=1; i<=maxHp; i++){
    if(i <= hp){lcd.write(5);}
    else{lcd.write(1);}
  }
  
  lcd.print("     ");
  lcd.print(String(ammo) + '/' + String(clips)); lcd.write(7);
  //lcd.setCursor(15, 0);

  lcd.setCursor(0, 1);
  lcd.print(getTeamName(myTeamID) + " Team");
  
}

