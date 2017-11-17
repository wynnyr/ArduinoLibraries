/*
Dynamixel Shield for Arduino UNO : Button and LED test

-- RGB LED Output --
LED 1 (Red)     --> Pin 6
LED 2 (Green)   --> Pin 5
LED 3 (Blue)    --> Pin 4

-- Push Button (10k ohm external pull-up resistor) --
Button 1 (SW1)  --> Pin 3
Button 2 (SW2)  --> Pin 2
*/

// constants won't change. They're used here to
// set pin numbers:
const int button1Pin = 3;    // pushbutton-1 pin
const int button2Pin = 2;    // pushbutton-2 pin
const int led1Pin =  6;      // the number of the LED-1 pin
const int led2Pin =  5;      // the number of the LED-2 pin
const int led3Pin =  4;      // the number of the LED-3 pin


// variables will change:
int button1State = 0;         // variable for reading the pushbutton-1 status
int button2State = 0;         // variable for reading the pushbutton-2 status

void setup() {
  // initialize the LED pin as an output:
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

  // check if some of pushbuttons is pressed.
  // if it is, the buttonState is LOW (Actived):
  if (button1State == LOW || button2State == LOW) {
    // turn LED on:
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, HIGH);
    digitalWrite(led3Pin, HIGH);
  }
  else {
    // turn LED off:
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2Pin, LOW);
    digitalWrite(led3Pin, LOW);
  }
}
