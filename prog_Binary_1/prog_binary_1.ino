int y=8;
int b=9;
int g=10;
int r=11;

const int LedPins[]={y,b,g,r};
const int NumLeds=4;

void setup(){
  for(int i=0;i<NumLeds;i++){
    pinMode(LedPins[i],OUTPUT);
  }
  
}


void loop(){
  for (int BinaryNum=0;BinaryNum<16;BinaryNum++){
    for (int bit=0;bit<NumLeds;bit++){
      
      digitalWrite(LedPins[bit],(BinaryNum>>bit) & 1);

    }
    delay(1000);

  }
  



}