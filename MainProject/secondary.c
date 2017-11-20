#include "menus.h"
#include "filegenerator.h"
#include "data.h"
#include "treatment.h"

extern void menuTest(HeartBeat *tableData);

void loopMenu(int choiceValue,HeartBeat *tableData);

void menuTest(HeartBeat *tableData) {
  int choiceValue;
  generateFile();
  choiceValue = loadMenu();
  paramFileWriter(choiceValue);
  readCsvFile();
  int counter=countValue(count1);
  tableData=malloc(counter*sizeof(HeartBeat));
  convertInTable(tableData, counter);
  loopMenu(choiceValue,tableData);
  free(tableData);
}

void loopMenu(int choiceValue,HeartBeat *tableData) {
  while (choiceValue!=8) {
    int loopHUD=0;
    system("cls");
    choiceValue = loadMenuG();
    menuTreatment(choiceValue, tableData);
    while (loopHUD!=1 && choiceValue!=8) {
    printf("\n\nappuyer sur 1 pour retourner au menu:");
    scanf("%d",&loopHUD);
    }
  }
}
