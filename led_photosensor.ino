void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(8,INPUT_PULLUP);
  //Serial.begin(9600);
}
  int b=1;
void loop() {
  // put your main code here, to run repeatedly:
  b=digitalRead(8);
  if (b==LOW){
    digitalWrite(12,LOW);
    //Serial.println("off");
    

  }
  else{
    digitalWrite(12,HIGH);
    //Serial.println("on");
  }
  
}
