#include "menus.h"
#include "filegenerator.h"
#include "data.h"
extern void menuTest();

void menuTest() {
  int choiceValue;
  /*readCsvFile();*/
  generateFile();
  choiceValue = loadMenu();
  paramFileWriter(choiceValue);
  system("cls");
  choiceValue = loadMenuG();
  menuTreatment(choiceValue);
}
