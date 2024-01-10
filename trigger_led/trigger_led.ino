void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Set the digital pin 7 as output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Send a high signal
  delay(1000);             // Wait for 1 second
  digitalWrite(LED_BUILTIN, LOW);    // Send a low signal
  delay(1000);             // Wait for 1 second
}
