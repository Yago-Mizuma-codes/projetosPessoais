void setup() {
  for(int i=8; i<12; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, true);
    delay(100);
    digitalWrite(i, false);
  }
}

void loop() {
  if (millis()%6000>3000){
    digitalWrite(8,true);
    digitalWrite(9, false);
  }
  else if(millis()%6000>1000) {
    digitalWrite(9, true);
    digitalWrite(10, false);

  }
  else{
    digitalWrite(10, true);
    digitalWrite(8, false);
  }
  

}
