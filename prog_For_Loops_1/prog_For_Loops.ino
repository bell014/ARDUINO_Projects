int RL=10;
int RB=5;
int YL=9;
int YB=3;
const int Leds[]={RL,YL};
const int LNum=2;
int ON=800;
int OFF=400;
////////////////////////////
void setup() {
  for(int i=0;i<LNum;i++){
    pinMode(Leds[i],OUTPUT);
  }
  
}
////////////////////////////
void loop() {
  for(int i=0;i<YB;i++){
    digitalWrite(YL,HIGH);
    delay(ON);
    digitalWrite(YL,LOW);
    delay(OFF);
  }
  
  for(int i=0;i<RB;i++){
    digitalWrite(RL,HIGH);
    delay(ON);
    digitalWrite(RL,LOW);
    delay(OFF);
  } 

}
