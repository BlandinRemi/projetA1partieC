#ifndef MENULED_H_INCLUDED
#define MENULED_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxCharPerLine 120

int value,value1,value2;
int jumpNumber;
int lengthSpace;
int lengthDash;
int heightCollumn;
int widthCollumn;
int heightRectangle;

void selectValue();
void printJumpLine(int jumpNumber);
void printManySpace(int lengthSpace);
void printDashLine(int lengthDash);
void printCollumn(int width);
void printText(int spaceAlignValue,const char *str);
void printTextNum(int spaceAlignValue,const char *str,int value);
void printTextDoubleNum(int spaceAlignValue,const char *str,int value1,int value2);
void printRectangleNum(int heightRectangle,int widthRectangle,int widthCollumn,const char *str,int value);
void printRectangleDoubleNum(int heightRectangle,int widthRectangle,int widthCollumn,const char *str,int value1,int value2);
int loadMenu();
int loadMenuG();

#endif // MENULED_H_INCLUDED
