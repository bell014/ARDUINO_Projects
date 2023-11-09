int red = 9;
int bright = 255;
int mid = 110;
int dim = 10;
int off = 0;


void setup() {
  pinMode(red,OUTPUT);

}

void loop() {
  analogWrite(red,bright);
  delay(5000);
  analogWrite(red,mid);
  delay(5000);
  analogWrite(red,dim);
  delay(5000);
  analogWrite(red,off);
  delay(1000);
}
