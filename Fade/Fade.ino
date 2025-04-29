const int led1 = 9;  // Left light
const int led2 = 10; // Right light

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // Flash left LED 3 times
  for (int i = 0; i < 3; i++) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(100);
    digitalWrite(led1, LOW);
    delay(100);
  }

  delay(200); // Short pause

  // Flash right LED 3 times
  for (int i = 0; i < 3; i++) {
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
    delay(100);
    digitalWrite(led2, LOW);
    delay(100);
  }

  delay(300); // Slightly longer pause before repeating
}
