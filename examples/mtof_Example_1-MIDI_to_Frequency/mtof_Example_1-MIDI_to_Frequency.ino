/*
  mtof - Example 1 - MIDI to Frequency
  
  Created by Sebastian Tomczak, 25 March 2017

  This example converts MIDI pitches 0 - 127 to frequency values, and prints to the serial monitor
  
*/

#include <mtof.h>

void setup() {
  Serial.begin(57600); 
}

void loop() {
  for(int i = 0; i < 128; i ++) {
    Serial.print("MIDI pitch ");
    Serial.print(i);
    Serial.print(" has a frequency of ");
    Serial.print(mtof.toFrequency(i));
    Serial.println(" Hz");
    delay(100);
  }

}
