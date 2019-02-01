int PULSADOR = 2;
int LED = 3,ESTADO = LOW;

void setup(){
  pinMode(PULSADOR,INPUT);  //Pin 2 como entrada
  pinMode(LED,OUTPUT);   //Pin 3 como salida
}

void loop(){
  while(digitalRead(PULSADOR) == LOW){            //espero a que el pulsador lo presionen
  }
  digitalWrite(LED,HIGH);                         //Enciende LED
  delay(10000);                                     //Espera de 5 segundos
  digitalWrite(LED,LOW);                          //Apago LED
  while(digitalRead(PULSADOR) == HIGH){           //Antirrebote
  }
}
