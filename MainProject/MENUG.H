#ifndef MENUG_H_INCLUDED
#define MENUG_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int jumpNumber;
int lengthSpace;
int lengthDash;
int heightCollumn;
int width;
int choiceValue;

void G();
void printJumpLineG(int jumpNumber);
void printManySpaceG(int lengthSpace);
void printDashLineG(int lengthDash);
void printCollumnG(int width);
void printTextG(int spaceAlignValue,const char* str);
int loadMenuG();

#endif // MENUG_H_INCLUDED
