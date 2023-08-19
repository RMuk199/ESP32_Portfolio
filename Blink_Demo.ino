void setup() {
  // put your setup code here, to run once:
  //COnnect to GPIO pin 2
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Send high energy to led through pin 2 (turn it on)
  digitalWrite(2, HIGH);
  //Wait 500 miliseconds
  delay(500);
  //send low energy/stop energy to led (turn off)
  digitalWrite(2, LOW);
  //Wait 500 ms
  delay(500);
}
