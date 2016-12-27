void configureGame() { // Where the game characteristics are stored, allows several game types to be recorded and you only have to change one variable (myGameID) to pick the game.
  if(myGameID == 0){//pistol
    myWeaponID = 1;
    maxAmmo = 10;
    ammo = 10;
    maxAmmoClips = 5;
    clips = 5;
    maxHp = 3;
    hp = 3;
    myWeaponDamage = 1;
  }
  
  if(myGameID == 1){//Semi Auto AR
    myWeaponID = 1;
    maxAmmo = 30;
    ammo = 30;
    maxAmmoClips = 3;
    clips = 3;
    maxHp = 10;
    hp = 10;
    myWeaponDamage = 2;
  }

  if(myGameID == 2){//Spawner Base
    myWeaponID = 0;
    maxAmmo = 255;
    ammo = 255;
    maxAmmoClips = 255;
    clips = 255;
    maxHp = 12;
    hp = 12;
    myWeaponDamage = 0;
  }
}

