#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct HeartBeat HeartBeat;
struct HeartBeat {
  int msTime;
  int bpm;
  HeartBeat *next;
};

FILE*fileptr;

void menuTreatment(int treatmentValue);
HeartBeat *createPackData(int newmstime,int newbpm);
void stackData(HeartBeat **firstptr,HeartBeat *newptr);
void readCsvFile();
#endif // DATA_H_INCLUDED
