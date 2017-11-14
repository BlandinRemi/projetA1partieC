#ifndef MENULED_H_INCLUDED
#define MENULED_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxCharPerLine 120
int jumpNumber;
int lengthSpace;
int lengthDash;
int heightCollumn;
int widthCollumn;
int choiceValue;

void selectValue();
void printJumpLine(int jumpNumber);
void printManySpace(int lengthSpace);
void printDashLine(int lengthDash);
void printCollumn(int width);
void printText(int spaceAlignValue,const char *str);
void printRectangleText(int widthRectangle,int widthCollumn,const char *str);
int loadMenu();

#endif // MENULED_H_INCLUDED
