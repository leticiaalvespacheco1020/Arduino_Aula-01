void setup() {
  pinMode (LED_BUILTIN, OUTPUT) ; // Configura LED  para saída

}

void loop() {
  digitalWrite (LED_BUILTIN, HIGH) ; // Liga o LED
delay (150) ;
digitalWrite (LED_BUILTIN, LOW) ; // Desliga o LED
delay (150) ;
}