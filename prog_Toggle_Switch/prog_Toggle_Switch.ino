int LedState=0;
int LedPin=9;
int ReadPin=6;
int NewVal;
int OldVal=1;
///////////////////////////////
void setup() {
  Serial.begin(9600);
  pinMode(LedPin,OUTPUT);
  pinMode(ReadPin,INPUT);

}
///////////////////////////////
void loop() {
  NewVal=digitalRead(ReadPin);

  if(OldVal==0 && NewVal==1 ){
    if(LedState==0){
      digitalWrite(LedPin,HIGH);
      LedState=1;
      Serial.println("==================");
      Serial.print("LED_STATE= ");
      Serial.println(LedState);
    }
    else{
      digitalWrite(LedPin,LOW);
      LedState=0;
      Serial.println("==================");
      Serial.print("LED_STATE= ");
      Serial.println(LedState);
    }
  }
  OldVal=NewVal;

}
