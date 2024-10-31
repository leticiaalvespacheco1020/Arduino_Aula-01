int led1=11;
int led2=10;
int led3=9;
int led4=6;

void setup() {
  Serial.begin(9600);
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
    pinMode(led4,OUTPUT);
}

void loop() {
  int tempo=analogRead(A0);
  Serial.println(tempo);
  
  digitalWrite(led1,HIGH);
  delay(tempo);
   digitalWrite(led1,LOW);
  delay(tempo);
  digitalWrite(led2,HIGH);
  delay(tempo);
   digitalWrite(led2,LOW);
  delay(tempo);
  digitalWrite(led3,HIGH);
  delay(tempo);
   digitalWrite(led3,LOW);
  delay(tempo);
  digitalWrite(led4,HIGH);
  delay(tempo);
   digitalWrite(led4,LOW);
  delay(tempo);
  
   
  delay(50);
}
