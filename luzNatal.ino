unsigned long tempo; 
unsigned long diferencaDeTempo=0;
bool estado=false;
void setup() {
  pinMode(11, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  for (int i =8; i<=11;i++){
    digitalWrite(i,true);
  }
}

void loop() {
  tempo=millis();
  if (tempo-diferencaDeTempo>2000) {
    digitalWrite(11,estado);
    digitalWrite(10,!estado);
    digitalWrite(9,estado);
    digitalWrite(8,!estado);
    diferencaDeTempo=tempo;
    estado=!estado;
    }    
}
