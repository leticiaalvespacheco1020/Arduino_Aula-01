
int tempo=1;
void setup()
{
  
pinMode(11, OUTPUT);
pinMode(6, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);

}

void loop()
{
for (int escada=0;escada<=255;escada++){
analogWrite(11,escada);
delay(tempo);
analogWrite(6,escada);
delay(tempo);
analogWrite(9,escada);
delay(tempo);
analogWrite(10,escada);
delay(tempo);}

for (int escada=255;escada>=0;escada--){
analogWrite(11,escada);
delay(tempo);
analogWrite(6,escada);
delay(tempo);
analogWrite(9,escada);
delay(tempo);
analogWrite(10,escada);
delay(tempo);}


}
