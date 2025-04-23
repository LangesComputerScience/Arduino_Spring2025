/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Fade/
*/

// Define the LED pins
const int led1 = 9;  // PWM pin
const int led2 = 10; // PWM pin

// Fading delay time (smaller = faster)
int fadeDelay = 10;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // Fade in LED 1
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(led1, brightness);
    delay(fadeDelay);
  }

  // Fade out LED 1
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(led1, brightness);
    delay(fadeDelay);
  }

  delay(500); // Small pause before starting LED 2

  // Fade in LED 2
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(led2, brightness);
    delay(fadeDelay);
  }

  // Fade out LED 2
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(led2, brightness);
    delay(fadeDelay);
  }

  delay(500); // Pause before repeating
}
