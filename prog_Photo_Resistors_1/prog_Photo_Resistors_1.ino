int PhoPin=A5;
int PhoVal;
int Wait=500;
int RL=11;
int GL=10;
const int LedPins[]={RL,GL};
const int LedNum=2;
//////////////////////////////
void setup() {
  Serial.begin(9600);
  pinMode(PhoPin,INPUT);
  for(int j=0;j<LedNum;j++){
    pinMode(LedPins[j],OUTPUT);
  }

}
//////////////////////////////
void loop() {
  PhoVal=analogRead(PhoPin);
  Serial.println(PhoVal);
  if(PhoVal>=140){
    digitalWrite(RL,HIGH);
    digitalWrite(GL,LOW);
  }
  if(PhoVal<140){
    digitalWrite(RL,LOW);
    digitalWrite(GL,HIGH);
  }
  delay(Wait);

}
