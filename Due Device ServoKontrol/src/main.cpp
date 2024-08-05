#include <Arduino.h>
#include <Servo.h>

Servo myServo; // Create a servo Odject

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud
  myServo.attach(9); // Attach the servo to pin 9
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read(); // Read the command from the Arduino Mega

    // Map the keypad commands to servo positions
    switch (command) {
      case '1':
        myServo.write(0); // Move servo to 0 degrees
        break;
      case '2':
        myServo.write(30); // Move servo to 30 degrees
        break;
      case '3':
        myServo.write(60); // Move servo to 60 degrees
        break;
      case '4':
        myServo.write(90); // Move servo to 90 degrees
        break;
      case '5':
        myServo.write(120); // Move servo to 120 degrees
        break;
      case '6':
        myServo.write(150); // Move servo to 150 degrees
        break;
      case '7':
        myServo.write(180); // Move servo to 180 degrees
        break;
      default:
        break;
    }
  }
}

