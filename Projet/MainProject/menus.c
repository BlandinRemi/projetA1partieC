#include "menus.h"

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

void printTextNum(int spaceAlignValue,const char* str,int value) {
  int strLength = strlen(str)-1;
  int tmp;
  tmp = spaceAlignValue - strLength;
  if (strLength%2!=0){
    printManySpace(tmp/2),printf(str,value),printManySpace(tmp/2+1);
  } else {
    printManySpace(tmp/2),printf(str,value),printManySpace(tmp/2);
  }
}

void printTextDoubleNum(int spaceAlignValue,const char* str,int value1,int value2) {
  int strLength = strlen(str)-2;
  int tmp;
  tmp = spaceAlignValue - strLength;
  if (strLength%2!=0){
    printManySpace(tmp/2),printf(str,value1,value2),printManySpace(tmp/2+1);
  } else {
    printManySpace(tmp/2),printf(str,value1,value2),printManySpace(tmp/2);
  }
}


void printRectangleText(int heightRectangle,int widthRectangle,int widthCollumn,const char *str) {
  int strLength = strlen(str);
  int i;
  if (strLength%2==0){
  heightRectangle=heightRectangle/2;
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printText(widthRectangle-widthCollumn,str),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);

  } else {

  heightRectangle=heightRectangle/2;
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printText(widthRectangle-widthCollumn,str),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
  }
}

void printRectangleNum(int heightRectangle,int widthRectangle,int widthCollumn,const char *str,int value) {
  int strLength = strlen(str);
  int i;
  if (strLength%2==0){
  heightRectangle=heightRectangle/2;
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printTextNum(widthRectangle-widthCollumn,str,value),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);

  } else {

  heightRectangle=heightRectangle/2;
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printTextNum(widthRectangle-widthCollumn,str,value),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
  }
}

void printRectangleDoubleNum(int heightRectangle,int widthRectangle,int widthCollumn,const char *str,int value1,int value2) {
  int strLength = strlen(str);
  int i;
  if (strLength%2==0){
  heightRectangle=heightRectangle/2;
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printTextDoubleNum(widthRectangle-widthCollumn,str,value1,value2),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);

  } else {

  heightRectangle=heightRectangle/2;
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printTextDoubleNum(widthRectangle-widthCollumn,str,value1,value2),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  for (i=0;i<heightRectangle;i++) {
  printManySpace((MaxCharPerLine-widthRectangle)/2-1),printCollumn(widthCollumn),printManySpace(widthRectangle-widthCollumn),printCollumn(widthCollumn),printManySpace((MaxCharPerLine-widthRectangle)/2-1);
  }
  printManySpace((MaxCharPerLine-widthRectangle)/2),printDashLine(widthRectangle),printManySpace((MaxCharPerLine-widthRectangle)/2);
  }
}

int loadMenu() {
  int choiceLEDValue;
  printDashLine(120);
  printJumpLine(2);
  printRectangleText(3,20,2,"Menu Coeur");
  printJumpLine(2);
  printDashLine(120);
  printJumpLine(1);
  printRectangleText(1,36,2,"choissisez le mode d'allumage:");
  printJumpLine(1);

  printDashLine(120);
  printJumpLine(1);

  printRectangleText(1,20,2,"1:Battement");
  printJumpLine(2);

  printRectangleText(1,20,2,"2:1Led sur 2");
  printJumpLine(2);

  printRectangleText(1,20,2,"3:1Led sur 3");
  printJumpLine(2);

  printRectangleText(1,20,2,"4:Aller-Retour");
  printJumpLine(2);

  printRectangleText(1,20,2,"5:Chenille");
  printJumpLine(2);

  printf("choix:");
  scanf("%d",&choiceLEDValue);
  printJumpLine(2);

  printRectangleNum(1,28,2,"Votre Choix est le %d",choiceLEDValue);

  printRectangleDoubleNum(1,28,2,"Mode Chang%c avec succ%cs",130,130);

  return choiceLEDValue;
}

int loadMenuG() {
  int treatmentChoiceValue;
  printDashLine(120);
  printJumpLine(2);
  printRectangleNum(3,30,2,"Menu traitement de donn%ces:",130);
  printJumpLine(2);
  printDashLine(120);
  printJumpLine(2);

  printRectangleNum(1,40,2,"1:affichage des donn%ces brutes.",130);
  printJumpLine(2);

  printRectangleNum(1,50,2,"2:affichage ordonn%ce des valeurs(tps/pouls).",130);
  printJumpLine(2);

  printRectangleDoubleNum(1,60,2,"3:recherche pr%ccise d'une donn%ce pour un temps x.",130,130);
  printJumpLine(2);

  printRectangleNum(1,40,2,"4:moyenne pouls pour une p%criode T.",130);
  printJumpLine(2);

  printRectangleDoubleNum(1,44,2,"5:afficher ligne de donn%ces en m%cmoire.",130,130);
  printJumpLine(2);

  printRectangleNum(1,44,2,"6:trouver pouls min/max avec tps associ%c.",130);
  printJumpLine(2);

  printRectangleDoubleNum(1,44,2,"7:afficher ligne de donn%ces en m%cmoire.",130,130);
  printJumpLine(2);

  printRectangleText(1,30,2,"8:quitter l'application");
  printJumpLine(2);

  printf("choix:");
  scanf("%d",&treatmentChoiceValue);
  printJumpLine(2);


  printRectangleNum(1,28,2,"Votre Choix est le %d",treatmentChoiceValue);

return treatmentChoiceValue;
}
