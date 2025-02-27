int Led_Int = 1;

void setup() {
  pinMode(Led_Int, OUTPUT);
}

void loop() {
  digitalWrite(Led_Int, HIGH);
  delay(1000);
  digitalWrite(Led_Int, LOW);
  delay(1000);
}
