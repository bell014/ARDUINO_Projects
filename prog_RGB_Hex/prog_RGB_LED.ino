int RL=9;
int GL=10;
int BL=11;
const int RGB_LED[]={RL,GL,BL};
const int LED_Num=3;
int Wait=2000;
int Space=1;
String msg=("Enter the color in (HEX_CODE): ");
/////////////////////////////
void setup() {
  for (int j=0;j<LED_Num;j++){
    pinMode(RGB_LED[j],OUTPUT);
  }
  
  Serial.begin(9600);
  
}
/////////////////////////////
void loop() {
  for(int j=0;j<Space;j++){
    Serial.println("");
    
  }
  Serial.println(msg);
  
  
  while(Serial.available()==0){
    String Hex=Serial.readStringUntil('/n');
      if(Hex.startsWith("#") && Hex.length()==7){
        String RH=Hex.substring(1,3);
        String GH=Hex.substring(3,5);
        String BH=Hex.substring(5,7);

        int RV=strtol(RH.c_str(),NULL,16);
        int GV=strtol(GH.c_str(),NULL,16);
        int BV=strtol(BH.c_str(),NULL,16);
        
        analogWrite(RL,RV);
        analogWrite(GL,GV);
        analogWrite(BL,BV);

        Serial.print("Red: ");
        Serial.print(RV);
        Serial.print(" Green: ");
        Serial.print(GV);
        Serial.print(" Blue: ");
        Serial.println(BV);
        Serial.println("===========================");
        Serial.println(msg);
        
      }
      
    
  }


}
