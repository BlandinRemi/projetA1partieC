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

HeartBeat *listData;
FILE*fileptr;

HeartBeat *createData(int newmstime,int newbpm);
void stackData(HeartBeat **firstptr,HeartBeat *newptr);
HeartBeat *readCsvFile();
#endif // DATA_H_INCLUDED
