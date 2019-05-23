

int LED_PIN = 7;
int onTime = 3050;
int offTime = 500;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(onTime);              // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(offTime);              // wait for a second
}
