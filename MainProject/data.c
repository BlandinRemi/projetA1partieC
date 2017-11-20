#include "data.h"

HeartBeat *readCsvFile() {
  fileptr = fopen("data.csv","r");
  int cond = 0, temp1,temp2;
  if (fileptr != 0) {
    while ((cond = fscanf(fileptr,"%d;%d",&temp1,&temp2))!=0 && cond != EOF) {
      stackData(&listData, createData(temp1,temp2));
    }
    fclose(fileptr);
  } else {
    printf("unable to create the file.");
  }
  return &listData;
}

HeartBeat *createData(int newmstime,int newbpm) {
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
