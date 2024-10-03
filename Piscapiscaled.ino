const int ledGreen = 12;
const int ledYellow = 8;
const int ledRed = 2;
void setup() {
 pinMode(ledGreen ,OUTPUT);
 pinMode(ledYellow ,OUTPUT);
 pinMode(ledRed ,OUTPUT);
 digitalWrite(ledGreen , LOW);
 digitalWrite(ledYellow , LOW);
 digitalWrite(ledRed , LOW);
}
void loop() {
 digitalWrite(ledGreen, LOW);
 delay(100);
 digitalWrite(ledYellow, HIGH);
 delay(200);
 digitalWrite(ledYellow, LOW);
 delay(100);
 digitalWrite(ledRed, HIGH);
 delay(200);
 digitalWrite(ledRed, LOW);
 delay(100);
 digitalWrite(ledYellow, HIGH);
 delay(200);
 digitalWrite(ledYellow, LOW);
 delay(100);
 digitalWrite(ledGreen, HIGH);
 delay(200);
}
