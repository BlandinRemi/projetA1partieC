#include "menuLED.h"
#include "fileGenerator.h"

extern void menuTest();

void menuTest() {
  generateFile();
  choiceValue = loadMenu();
  paramFileWriter(choiceValue);
}
