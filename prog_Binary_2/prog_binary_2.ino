int b=12;
int g=11;
int y=10;
int r=9;
int b2=8;

const int LedPins[] ={b,g,y,r,b2};
const int LedNum = 5;

void setup(){
  for(int i=0;i<LedNum;i++){
    pinMode(LedPins[i],OUTPUT);

  }
  


}


void loop(){
  for (int BinaryNum=0;BinaryNum<32;BinaryNum++){
    for (int bit=0;bit<LedNum;bit++){
      digitalWrite (LedPins[bit],(BinaryNum>>bit) & 1);
 
    }
    delay (800);


  }




}