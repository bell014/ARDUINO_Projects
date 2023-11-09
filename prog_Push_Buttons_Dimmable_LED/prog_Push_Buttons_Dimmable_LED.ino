int BuzzPin=2;
int LedPin=9;
int OutPins[]={BuzzPin,LedPin};
int PPin=11;
int MPin=10;
int InPins[]={PPin,MPin};
int PVal;
int MVal;
int NumReads=2;
int LVal=0;
int dt1=1500;
int dt2=500;
////////////////////////////////
void setup() {
  Serial.begin(9600);
  for (int j=0;j<NumReads;j++){
    pinMode(OutPins[j],OUTPUT);
  }

  for (int j=0;j<NumReads;j++){
    pinMode(InPins[j],INPUT);
  }
}
////////////////////////////////
void loop() {
  PVal=digitalRead(PPin);
  MVal=digitalRead(MPin);
  if (PVal==0){  
      LVal=LVal+15;
    
  }
  else if (MVal==0) {
      LVal=LVal-15;

  }

  if(LVal>255){
    for(int j=0;j<3;j++){
      digitalWrite(BuzzPin,HIGH);
      delay(dt2);
      digitalWrite(BuzzPin,LOW);
      delay(dt2);
    }
    LVal=255;
  }
  else if (LVal<0){
    digitalWrite(BuzzPin,HIGH);
    delay(dt2);
    digitalWrite(BuzzPin,LOW);
    LVal=0;
  }

  analogWrite(LedPin,LVal);
  delay(dt1);
}
