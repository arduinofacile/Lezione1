/*
  Lezione 1: Blinking Led
  Turns an LED on for one second, then off for one second, repeatedly.
  created 3 Feb 2019
  by Andrea Primavera
*/

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int ledTime = 5;
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(ledTime);                    // wait for a certain time
  digitalWrite(13, LOW);    // turn the LED off 
  delay(ledTime);                    // wait for a certain time
}
