bool A=false, B=false;
void setup() {
  for(int i=8; i<11; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, true);
    delay(100);
    digitalWrite(i, false);
  }
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}


void loop() {
  A=digitalRead(2);
  B=digitalRead(3);
  if(A || B) digitalWrite(10, true);
  else digitalWrite(10,false);
  if(A && B) digitalWrite (9, true);
  else digitalWrite(9,false);
  if (A!=B) digitalWrite(8, true);
  else digitalWrite(8, false);

}
