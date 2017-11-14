#include "MENUG.H"

void printJumpLineG(int jumpNumber) {
  int i;
  for(i=0;i<jumpNumber;i++) {
  printf("\n");
  }
}

void printManySpaceG(int lengthSpace) {
  int i;
  for(i=0;i<lengthSpace;i++) {
    printf(" ");
    }
}

void printDashLineG(int lengthDash) {
  int i;
  for(i=0;i<lengthDash;i++) {
    printf("-");
    }
}

void printCollumnG(int width) {
  int i;
  for(i=0;i<width;i++) {
    printf("|");
  }
}

void printTextG(int spaceAlignValue,const char* str) {
  int strLength = strlen(str);
  int tmp;
  tmp = spaceAlignValue - strLength;
  if (strLength%2!=0){
    printManySpaceG(tmp/2),printf(str),printManySpace(tmp/2+1);
  } else {
    printManySpaceG(tmp/2),printf(str),printManySpace(tmp/2);
  }
}

int loadMenuG(){

}
