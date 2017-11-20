#include "treatment.h"

int countValue(int counter) {
  HeartBeat *temp=listData;
  while (temp!=0) {
    counter++;
    temp=temp->next;
  }
  return counter;
}

void convertInTable(HeartBeat *tableData,int counter) {
  int i;
  for (i=0;i<counter;i++) {
    tableData[i].msTime = listData->msTime;
    tableData[i].bpm = listData->bpm;
    listData=listData->next;
  }
}

void printTable(HeartBeat *tableData,int counter) {
  int i;
  for (i=0;i<counter;i++) {
  printf("temps en ms:%d/pouls en bpm:%d\n",tableData[i].msTime,tableData[i].bpm);
  }
}

void seekbpm(HeartBeat *tableData,int counter,int choiceTime) {
  int i=0;
  while (tableData[i].msTime!=choiceTime) {
    i++;
  }
  printf("pouls associ%c:%d",130,tableData[i].bpm);
}

void insertSortincreasebpm(HeartBeat *tableData,int counter) {
  int i, tempValue1, tempValue2, countDown, marker;
  for(i=1;i<counter;i++) {
    tempValue1=tableData[i].bpm;
    tempValue2=tableData[i].msTime;
    countDown=i-1;
    do {
      marker=0;
      if (tableData[countDown].bpm>tempValue1) {
        tableData[countDown+1].bpm=tableData[countDown].bpm;
        tableData[countDown+1].msTime=tableData[countDown].msTime;
        tableData[countDown].bpm=tempValue1;
        tableData[countDown].msTime=tempValue2;
        countDown--;
        marker=1;
      }
      if (countDown<0) {
        marker=0;
      }
    }
    while(marker!=0);
  tableData[countDown+1].bpm=tempValue1;
  tableData[countDown+1].msTime=tempValue2;
  }
  for(i=0;i<counter;i++) {
    printf("temps en ms:%d/pouls en bpm:%d\n",tableData[i].bpm,tableData[i].msTime);
  }
}

void menuTreatment(int treatmentValue,HeartBeat *tableData) {
  int choiceValue;
  int counter=countValue(count1);
  switch(treatmentValue) {
    case 1:{
      printTable(tableData, counter);
      break;
    } case 2:{
      printRectangleNum(1,66,2,"choississez entre l'affichage croissant(1) et d%ccroissant(2).",130);
      printf("choix:");
      scanf("%d",&choiceValue);

      if (choiceValue==1) {
        printRectangleText(1,50,2,"choississez entre le pouls(1) et le temps(2).");
        printf("choix:");
        scanf("%d",&choiceValue);

        if (choiceValue==1) {
          printRectangleText(1,50,2,"1:affichage croissant en fonction du pouls.");
          insertSortincreasebpm(tableData, counter);
        } else {
          printRectangleText(1,50,2,"2:affichage croissant en fonction du temps.");

        }

      } else {
        printRectangleText(1,50,2,"choississez entre le pouls(1) et le temps(2).");
        printf("choix:");
        scanf("%d",&choiceValue);

        if (choiceValue==1) {
          printRectangleNum(1,56,2,"1:affichage d%ccroissant en fonction du pouls.",130);
        } else {
          printRectangleNum(1,50,2,"2:affichage d%ccroissant en fonction du temps.",130);
        }
      }
      break;
    } case 3:{
      printf("valeur de temps recherch%c(en ms):",130);
      scanf("%d",&choiceTime);
      seekbpm(tableData, counter, choiceTime);
      break;
    } case 4:{
      break;
    } case 5:{
      break;
    } case 6:{
      break;
    } case 7:{
      break;
    }
  }
}
