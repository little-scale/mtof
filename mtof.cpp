/*
  mtof.cpp
 
  Created by Sebastian Tomczak, 25 March 2017.

*/

#include "Arduino.h"
#include "Math.h"
#include "mtof.h"

double base_frequency = 440.0;
double base_pitch = 69.0;

double mtof_class::toFrequency(double incoming_note) {
  return base_frequency * pow (2.0, (incoming_note - base_pitch) / 12.0);
}

double mtof_class::toPitch(double incoming_frequency) {
  return base_pitch + (12.0 * log(incoming_frequency / base_frequency) / log(2));
}

mtof_class mtof; 
