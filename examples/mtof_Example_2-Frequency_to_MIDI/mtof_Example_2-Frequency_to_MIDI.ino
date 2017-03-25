/*
  mtof - Example 2 - Frequency to MIDI

  Created by Sebastian Tomczak, 25 March 2017

  This example converts a random frequency to a MIDI pitch value, and prints to the serial monitor

*/

#include <mtof.h>

void setup() {
  Serial.begin(57600);
}

void loop() {
  int random_frequency = random(10000) + 20;
  Serial.print(random_frequency);
  Serial.print(" Hz ");
  Serial.print(" has a MIDI pitch of ");
  Serial.println(mtof.toPitch(random_frequency));
  delay(1000);
}
