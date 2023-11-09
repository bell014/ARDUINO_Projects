int BL=9;
int GL=10;
int RL=11;
const int LedPins[]={BL,GL,RL};
const int LedNum=3;
String Color;
String msg1="Enter the color of the LED you want to light up: ";
String msg2="Hell0, ";
String msg3=" welcome to Arduino!";
const int Space=1;
const int Wait=2000;
void setup() { 
  for(int i=0;i<LedNum;i++){
    pinMode(LedPins[i],OUTPUT);
  }
  Serial.begin(9600);

}

void loop() {
  for(int i=0;i<Space;i++){
    Serial.println("");
    }
  
  Serial.println(msg1);
  while (Serial.available()==0){}
  Color=Serial.readString();
  if (Color=="red"||Color=="RED"){
    digitalWrite(RL,HIGH);
    digitalWrite(GL,LOW);
    digitalWrite(BL,LOW);
    Serial.println("----------------");
    Serial.println("RED LED IS ON ");
    Serial.print("============================");
    
  }

  if (Color=="green"||Color=="GREEN"){
    digitalWrite(RL,LOW);
    digitalWrite(GL,HIGH);
    digitalWrite(BL,LOW);
    Serial.println("----------------");
    Serial.println("GREEN LED IS ON ");
    Serial.print("============================");
  }

  if (Color=="blue"||Color=="BLUE"){
    digitalWrite(RL,LOW);
    digitalWrite(GL,LOW);
    digitalWrite(BL,HIGH);
    Serial.println("----------------");
    Serial.println("BLUE LED IS ON ");
    Serial.print("============================");
    
  }

  if (Color=="off"||Color=="OFF"){
    digitalWrite(RL,LOW);
    digitalWrite(GL,LOW);
    digitalWrite(BL,LOW);
    Serial.println("----------------");
    Serial.println("ALL LEDS ARE OFF ");
    Serial.print("============================");
    
  }

 
  delay(Wait);
}
