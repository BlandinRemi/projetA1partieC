#ifndef TREATMENT_H_INCLUDED
#define TREATMENT_H_INCLUDED
#include "data.h"

void menuTreatment(int treatmentValue);
void printData();
int data;
int tableData[0];
void convertInTable(int tableData);
void fusion(int tableau[],int deb1,int fin1,int fin2);
void tri_fusion_bis(int tableau[],int deb,int fin);
void tri_fusion(int tableau[],int longueur);

#endif // TREATMENT_H_INCLUDED
