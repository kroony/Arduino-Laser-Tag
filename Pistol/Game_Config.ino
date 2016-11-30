void configureGame() { // Where the game characteristics are stored, allows several game types to be recorded and you only have to change one variable (myGameID) to pick the game.
  if(myGameID == 0){
    myWeaponID = 1;
    maxAmmo = 10;
    ammo = 10;
    maxAmmoClips = 5;
    clips = 5;
    maxLife = 3;
    life = 3;
    myWeaponHP = 1;
  }
  if(myGameID == 1){
    myWeaponID = 1;
    maxAmmo = 30;
    ammo = 30;
    maxAmmoClips = 3;
    clips = 3;
    maxLife = 10;
    life = 10;
    myWeaponHP = 2;
  }
}

