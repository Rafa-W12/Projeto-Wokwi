void setup() {
  pinMode(LED_BUILTIN, OUTPUT);//Vermelho
  pinMode(8, OUTPUT);//Amarelo
  pinMode(7, OUTPUT);//Verde

}

void loop() {
  digitalWrite(8, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  delay(500);
}

