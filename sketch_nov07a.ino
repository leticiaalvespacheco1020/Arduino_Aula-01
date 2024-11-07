#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inicializa o LCD no endereço 0x27 com 16 colunas e 2 linhas
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pinos para os LEDs
const int ledVerde = 9;
const int ledAmarelo = 10;
const int ledVermelho = 11;

void setup() {
  // Inicializa o LCD
  lcd.init();
  lcd.setBacklight(HIGH);  // Liga a retroiluminação do LCD
  
  // Inicializa os pinos dos LEDs como saída
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  // Desliga os LEDs inicialmente
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
}

void loop() {
  // Lê o valor do potenciômetro (0 a 1023)
  int valorPot = analogRead(A0);

  // Exibe o valor no LCD
  lcd.setCursor(0, 0);  // Primeira linha do LCD
  lcd.print("Potenc.: " + String(valorPot));

  // Tabela de controle dos LEDs com base no valor do potenciômetro
  if (valorPot >= 0 && valorPot <= 333) {
    // Potenciômetro na faixa 0-333
    lcd.setCursor(0, 1); // Segunda linha do LCD
    lcd.print("Led Verde ON");
    
    // Acende o LED verde e apaga os outros
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
  }
  else if (valorPot >= 334 && valorPot <= 777) {
    // Potenciômetro na faixa 334-777
    lcd.setCursor(0, 1); // Segunda linha do LCD
    lcd.print("Led Amarelo ON");
    
    // Acende o LED amarelo e apaga os outros
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
  }
  else if (valorPot >= 778 && valorPot <= 1023) {
    // Potenciômetro na faixa 778-1023
    lcd.setCursor(0, 1); // Segunda linha do LCD
    lcd.print("Led Vermelho ON");
    
    // Acende o LED vermelho e apaga os outros
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
  }

  delay(200); // Aguarda 200ms para evitar mudanças rápidas na tela
}
