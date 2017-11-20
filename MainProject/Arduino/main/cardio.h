#ifndef CARDIO_H
#define CARDIO_H

#include <arduino.h>

int getPulse(int *value, int *valueLast, unsigned long *time1, unsigned long *timeLast);

#endif

