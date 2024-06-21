/*
    Project name : ESP8266 LED Bar Graph Display
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-led-bar-graph-display
*/

const int ledPins[] = {D1, D2, D3, D4, D5, D6, D7, D8, D9, D10}; // GPIO pins connected to LEDs

void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(ledPins[i], OUTPUT); // Set LED pins as OUTPUT
  }
}

void loop() {
  int sensorValue = analogRead(A0); // Read sensor value (0-1023 range)

  // Map sensor value to LED bar graph
  int numLeds = map(sensorValue, 0, 1023, 0, 10);

  // Display LED bar graph
  for (int i = 0; i < 10; i++) {
    if (i < numLeds) {
      digitalWrite(ledPins[i], HIGH); // Turn on LED
    } else {
      digitalWrite(ledPins[i], LOW); // Turn off LED
    }
  }

  delay(100); // Add a small delay before the next reading
}
