void setup() {
  pinMode(7, OUTPUT);  // Set the digital pin 7 as output
}

void loop() {
  digitalWrite(7, HIGH);   // Send a high signal
  delay(1000);             // Wait for 1 second
  digitalWrite(7, LOW);    // Send a low signal
  delay(1000);             // Wait for 1 second
}
