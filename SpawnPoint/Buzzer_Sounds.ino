
//noise played when checking how much ammo you have
void playAmmo(){
  if(ammo == 0){playNoAmmo();}
  else{
    for (byte i = 0; i < ammo; i++) {
      delay(100);
      playTone(500, 100); 
    }
  }
}

void playReload() {
  for (int i = 100;i > 0;i--) {
    playTone((3000-9*i), 2);
  } 
  delay(50);
  for (int i = 1;i < 100;i++) {
    playTone((3000-9*i), 2);
  } 
}

//noise is played when character is alive and hit
void playHit() {
  playTone(500, 500);  
}

//noise is played when there is no ammo left in the clip
void playNoAmmo() {
  playTone(500, 100);
  playTone(1000, 100);  
}

//noise is played when there is no clips left
void playNoClips() {
  playTone(500, 100);
  delay(100);
  playTone(500, 100);
  delay(100);
  playTone(1000, 100);
}

//noise is played when the gun is fired
void playGunShot()  {
  int low = 700;
  int high = 1300;
  unsigned long time = millis();
  while(millis() - time <= 500)  {
    tone(speakerPin, random(low, high));
  }
  noTone(speakerPin);
}

//function for playing tones
void playTone(int tone, int duration) { // A sub routine for playing tones like the standard arduino melody example
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}
