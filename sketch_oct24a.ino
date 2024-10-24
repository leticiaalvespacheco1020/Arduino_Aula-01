int Ledverde=11;
int Pushverde=12;
int Ledamarelo=7;
int Pushamarelo=8;
  int Ledvermelho=2;
int Pushvermelho=4;
                                                                                                                       
void setup() {
  pinMode(Ledverde,OUTPUT);
  pinMode(Pushverde,INPUT);
  Serial.begin(9600);
}

void loop() {
  
  if (digitalRead(Pushverde)==HIGH){
    digitalWrite(Ledverde, HIGH);
  Serial.println("Pushverde pressionado");
  }else {digitalWrite(Ledverde, LOW);}
  
  if (digitalRead(Pushamarelo)==HIGH){
    digitalWrite(Ledamarelo, HIGH);
  Serial.println("Pushamarelo pressionado");
  }else {digitalWrite(Ledamarelo, LOW);}

  if (digitalRead(Pushvermelho)==HIGH){
    digitalWrite(Ledvermelho, HIGH);
  Serial.println("Pushvermelho pressionado");
  }else {digitalWrite(Ledvermelho, LOW);}

}
