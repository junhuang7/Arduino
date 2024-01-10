void setup() {
  pinMode(LED_BUILTIN, OUTPUT);   // Set the digital pin 7 as output
  digitalWrite(LED_BUILTIN, HIGH); // Send a high signal
  delay(1000);            // Wait for 1000 milliseconds
  digitalWrite(LED_BUILTIN, LOW);  // Send a low signal
}

void loop() {
  // Do nothing, or you could implement an infinite loop
  // while(1) {}
}
