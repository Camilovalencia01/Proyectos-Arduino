int LED = 3,BRILLO,POT = 0;

void setup(){
  pinMode(LED,OUTPUT);
  //Las entradas analogicas no requieren inicializacion            
}

void loop(){
  BRILLO = analogRead(POT) / 4;
  analogWrite(LED,BRILLO);
}
