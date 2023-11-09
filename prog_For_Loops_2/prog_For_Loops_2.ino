const int Space=1;
const int Wait=400;
///////////////////////
void setup() {
  Serial.begin(9600);

}
///////////////////////
void loop() {
  for (int j=0;j<Space;j++){
    Serial.println("");
  }

  for (int j=10;j>=0;j=j-1){
    Serial.println(j);
    delay(Wait);
  }
 Serial.print("======="); 
  
}
