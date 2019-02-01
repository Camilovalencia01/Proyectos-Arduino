int PULSADOR = 2;
int LED = 3,ESTADO = LOW;

void setup(){
  pinMode(PULSADOR,INPUT);  //Pin 2 como entrada
  pinMode(LED,OUTPUT);   //Pin 3 como salida
}

void loop(){
  while(digitalRead(PULSADOR) == LOW){            //espero a que el pulsador lo presionen
  }                                             

  ESTADO = digitalRead(LED);                      //Leo estado del led 
  digitalWrite(LED,!ESTADO);                      //Hace que el valor sea el contrario
  while(digitalRead(PULSADOR) == HIGH){           //Antirrebote
  
  }

}
