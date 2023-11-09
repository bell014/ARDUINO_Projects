String msg1("Input the (Radius) of the circle: ");
String msg2("The (Area) of the circle is: ");
float Radius;
float Area;
//////////////////////////
void setup() {
  Serial.begin(9600);
  
}
//////////////////////////
void loop() {
  for (int i = 0; i < 1; i++) {
    Serial.println(" ");
  }
  Serial.println(msg1);
  Serial.println("------------");
  while (Serial.available()==0){}
  Radius=Serial.parseFloat();
  Area=3.14*Radius*Radius;
  Serial.print(msg2);
  Serial.println(Area);
  Serial.print("=================");
  
}
