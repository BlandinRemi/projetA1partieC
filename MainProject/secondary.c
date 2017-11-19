#include "menus.h"
#include "filegenerator.h"
#include "data.h"
#include "treatment.h"

extern void menuTest();

void loopMenu(int choiceValue);

void menuTest() {
  int choiceValue;
  generateFile();
  choiceValue = loadMenu();
  paramFileWriter(choiceValue);
  readCsvFile();
  loopMenu(choiceValue);
}

void loopMenu(int choiceValue) {
  while (choiceValue!=8) {
    int loopHUD=0;
    system("cls");
    choiceValue = loadMenuG();
    menuTreatment(choiceValue);
    while (loopHUD!=1) {
    printf("\n\nappuyer sur 1 pour retourner au menu:");
    scanf("%d",&loopHUD);
    }
  }
}
