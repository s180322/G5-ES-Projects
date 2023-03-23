#include <LiquidCrystal.h>

//  pin numbers for the LCD display
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//  pin numbers for the button and motor
const int buttonPin1 = 7;
const int motorPin = 5;

void setup() {
  // Set the input/output mode for the pins
  pinMode(buttonPin1, INPUT);
  pinMode(motorPin, OUTPUT);

  // motor is initially turned off
  digitalWrite(motorPin, LOW);

  // Initialize the LCD display
  lcd.begin(16, 2);
}

void loop() {
  // Check if button 1 is pressed
  if (digitalRead(buttonPin1) == LOW) {
    // Turn on the motor
    digitalWrite(motorPin, HIGH);

    // Display the motor status on the LCD display
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Motor is ON");
    delay (1000);
  } else {
    
    digitalWrite(motorPin, LOW);
    lcd.clear();
    lcd.print("Motor is OFF");
    delay(1000);
  }

    
}
