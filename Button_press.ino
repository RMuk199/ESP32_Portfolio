// set pin numbers
const int buttonPin = 4;  // the number of the pushbutton pin
const int ledPin =  5;    // the number of the LED pin

// variable for storing the pushbutton status 
int buttonState;
int lastButtonState;
int ledState = LOW;

void setup() {
  Serial.begin(115200);  
  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT_PULLUP);
  // initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  buttonState = digitalRead(buttonPin);
}

void loop() {
  lastButtonState = buttonState;
  // read the state of the pushbutton value
  buttonState = digitalRead(buttonPin);
  
  Serial.println(buttonState);
  // check if the pushbutton is pressed.
  if (lastButtonState == HIGH && buttonState == LOW){
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
 
}
