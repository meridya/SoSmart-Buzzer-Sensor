int buzzer=9;

void setup (){
pinMode(buzzer,OUTPUT);
  
  }
void loop(){
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
  }
