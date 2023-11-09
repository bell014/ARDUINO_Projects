String Msg1="Enter a number of blinks: ";
String Msg2="LED is going to blink [";
String Msg3="] time(s)";
String Msg4="Num of blink(s) left [";
String Msg5="] ";
int Led=9;
int NumB;
const int Space=1;
const int Wait=2000;
const int ON=800;
const int OFF=400;

/////////////////////////
void setup() {
  pinMode(Led,OUTPUT);
  Serial.begin(9600);  

}
/////////////////////////
void loop() {
  for(int i=0;i<Space;i++){
    Serial.println();
  }

  Serial.println(Msg1);
  while (Serial.available()==0 ){}
  
  NumB=Serial.parseInt();
  Serial.println("-------------");
  Serial.print(Msg2);
  Serial.print(NumB); 
  Serial.println(Msg3);
  Serial.println("-------------");

  for (int j=NumB;j>0;j--){
    Serial.print(Msg4);
    Serial.print(j); 
    Serial.println(Msg5);
    Serial.println("-------------");
    
    digitalWrite(Led,HIGH);
    delay(ON);
    digitalWrite(Led,LOW);
    delay(OFF);
    
  }

  Serial.println("Num of blink(s) left [0]");
  Serial.print("==================================");
  delay(Wait);
}
