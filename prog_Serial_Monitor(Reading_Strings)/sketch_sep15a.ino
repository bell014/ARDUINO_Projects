
String Name;
String msg1="Enter your username here: ";
String msg2="Hell0, ";
String msg3=" welcome to Arduino!";
const int Space=1;
const int Wait=2000;
void setup() { 

  Serial.begin(9600);
}

void loop() {
  for(int i=0;i<Space;i++){
    Serial.println("");
    }
  
  Serial.println(msg1);
  while (Serial.available()==0){}
  Name=Serial.readString();
  Serial.println("----------------");
  Serial.print(msg2);
  Serial.print(Name);
  Serial.println(msg3);
  Serial.print("============================");
  delay(Wait);
}
