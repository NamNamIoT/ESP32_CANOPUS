#define LED_YELLOW 12 //Pin led color yellow is IO12
void setup() {
  // initialize digital pin LED_YELLOW as an output.
  pinMode(LED_YELLOW, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_YELLOW, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_YELLOW, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
