void setup() {
  pinMode(7, OUTPUT);   // Set the digital pin 7 as output
  digitalWrite(7, HIGH); // Send a high signal
  delay(1000);            // Wait for 1000 milliseconds
  digitalWrite(7, LOW);  // Send a low signal
}

void loop() {
  // Do nothing, or you could implement an infinite loop
  // while(1) {}
}
