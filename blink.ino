void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(8, LOW);
  delay(1000);
  digitalWrite(8, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
