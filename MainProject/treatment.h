#ifndef TREATMENT_H_INCLUDED
#define TREATMENT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include "menus.h"
#define TableLength 50

int count1;
int choiceTime;
HeartBeat *tableData;

void menuTreatment(int treatmentValue,HeartBeat *tableData);
int countValue(int counter);
void convertInTable(HeartBeat *tableData,int counter);
void printTable(HeartBeat *tableData, int counter);
void insertincreaseSortbpm(HeartBeat *tableData,int counter);
void seekbpm(HeartBeat *tableData,int counter, int choiceTime);


#endif // TREATMENT_H_INCLUDED
