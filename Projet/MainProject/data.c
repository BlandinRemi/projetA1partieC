#include "data.h"

void readCsvFile() {
  fileptr = fopen("data.csv","r");
  HeartBeat *list = 0;
  int cond = 0, temp1,temp2;
  if (fileptr != 0) {
    while ((cond = fscanf(fileptr,"%d;%d",&temp1,&temp2))!=0 && cond != EOF) {
      stackData(&list, createPackData(temp1,temp2));
    }
    fclose(fileptr);
  } else {
    printf("unable to create the file.");
  }
}

HeartBeat *createPackData(int newmstime,int newbpm) {
  HeartBeat *newHB = malloc(sizeof(HeartBeat));
  newHB->msTime = newmstime;
  newHB->bpm = newbpm;
  newHB->next = 0;
  return newHB;
}

void stackData(HeartBeat **firstptr,HeartBeat *newptr) {
  if (*firstptr == 0) {
    *firstptr = newptr;
  } else {
    HeartBeat *posQueue = *firstptr;

    while (posQueue->next !=0) {
      posQueue = posQueue->next;
    }
    posQueue->next = newptr;
  }
}
