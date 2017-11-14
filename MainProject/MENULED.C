#include "menuLED.h"

void printJumpLine(int jumpNumber) {
  int i;
  for(i=0;i<jumpNumber;i++) {
  printf("\n");
  }
}

void printManySpace(int lengthSpace) {
  int i;
  for(i=0;i<lengthSpace;i++) {
    printf(" ");
    }
}

void printDashLine(int lengthDash) {
  int i;
  for(i=0;i<lengthDash;i++) {
    printf("-");
    }
}

void printCollumn(int width) {
  int i;
  for(i=0;i<width;i++) {
    printf("|");
  }
}

void printText(int spaceAlignValue,const char* str) {
  int strLength = strlen(str);
  int tmp;
  tmp = spaceAlignValue - strLength;
  if (strLength%2!=0){
    printManySpace(tmp/2),printf(str),printManySpace(tmp/2+1);
  } else {
    printManySpace(tmp/2),printf(str),printManySpace(tmp/2);
  }
}

void printRectangleText(int widthRectangle,int widthCollumn,const char *str) {
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printText(widthRectangle-widthCollumn,str),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
}

int loadMenu() {
  printManySpace(50),printDashLine(20),printManySpace(50);
  printManySpace(49),printCollumn(2),printManySpace(18),printCollumn(2),printManySpace(49);
  printManySpace(49),printCollumn(2),printText(18,"Menu Coeur"),printCollumn(2),printManySpace(49);
  printManySpace(49),printCollumn(2),printManySpace(18),printCollumn(2),printManySpace(49);
  printManySpace(50),printDashLine(20),printManySpace(50);
  printJumpLine(2);

  printRectangleText(20,2,"Menu Coeur");
  printJumpLine(2);

  printManySpace(42),printDashLine(36),printManySpace(42);
  printManySpace(41),printCollumn(2),printText(34,"choissisez le mode d'allumage"),printCollumn(2),printManySpace(41);
  printManySpace(42),printDashLine(36),printManySpace(42);

  printJumpLine(1);

  printDashLine(120);

  printJumpLine(1);

  printManySpace(5),printDashLine(20),printJumpLine(1);
  printManySpace(4),printCollumn(2),printText(18,"1:Battement"),printCollumn(2),printJumpLine(1);
  printManySpace(5),printDashLine(20),printJumpLine(1);
  printJumpLine(2);

  printManySpace(5),printDashLine(20),printJumpLine(1);
  printManySpace(4),printCollumn(2),printText(18,"2:1Led sur 2"),printCollumn(2),printJumpLine(1);
  printManySpace(5),printDashLine(20),printJumpLine(1);
  printJumpLine(2);

  printManySpace(5),printDashLine(20),printJumpLine(1);
  printManySpace(4),printCollumn(2),printText(18,"3:1Led sur 3"),printCollumn(2),printJumpLine(1);
  printManySpace(5),printDashLine(20),printJumpLine(1);
  printJumpLine(2);

  printManySpace(5),printDashLine(20),printJumpLine(1);
  printManySpace(4),printCollumn(2),printText(18,"4:Aller-Retour"),printCollumn(2),printJumpLine(1);
  printManySpace(5),printDashLine(20),printJumpLine(1);
  printJumpLine(2);

  printManySpace(5),printDashLine(20),printJumpLine(1);
  printManySpace(4),printCollumn(2),printText(18,"5:Chenille"),printCollumn(2),printJumpLine(1);
  printManySpace(5),printDashLine(20),printJumpLine(1);
  printJumpLine(2);

  printf("choix:");
  scanf("%d",&choiceValue);
  printJumpLine(2);

  printManySpace(5),printDashLine(24),printJumpLine(1);
  printManySpace(4),printCollumn(2),printManySpace(1),printf("Votre Choix est le %d",choiceValue),
  printManySpace(1),printCollumn(2),printJumpLine(1);
  printManySpace(5),printDashLine(24),printJumpLine(1);
  printJumpLine(2);

  printManySpace(5),printDashLine(28),printJumpLine(1);
  printManySpace(4),printCollumn(2),printText(26,"Mode Change avec succes."),printCollumn(2),printJumpLine(1);
  printManySpace(5),printDashLine(28),printJumpLine(1);
  printJumpLine(2);

  return choiceValue;
}
