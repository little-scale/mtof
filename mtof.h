/*
  mtof.h
 
  Created by Sebastian Tomczak, 25 March 2017
 
*/

#ifndef mtof_h
#define mtof_h

#include "Arduino.h"

class mtof_class
{
	public: 
		double toFrequency(double incoming_note);
		double toPitch(double incoming_frequency);
};

extern mtof_class mtof;

#endif
