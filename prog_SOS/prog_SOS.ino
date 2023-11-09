int S=3;
int O=3;


void setup() {
  
  pinMode(8,OUTPUT);
}


void loop() {
  S=3;
  while(S!=0){
    digitalWrite(8,HIGH);
    delay (500);
    digitalWrite(8,LOW);
    delay (400);
  S--;
  O=3;

}
delay(300);

  while(O!=0){
    digitalWrite(8,HIGH);
    delay (1000);
    digitalWrite(8,LOW);
    delay (800);
  O--;
  S=3;
}
delay(300);

  while(S!=0){
    digitalWrite(8,HIGH);
    delay (500);
    digitalWrite(8,LOW);
    delay (400);
  S--;
  }
delay(3000);


}
