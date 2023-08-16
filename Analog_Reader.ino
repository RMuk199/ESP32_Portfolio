//potentiometre is connected to GPIO 4
const int potPin = 4;

int potValue = 0;

void setup() {
  Serial.begin(9600);
  delay(1000);

}

void loop() {
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(500);

}
