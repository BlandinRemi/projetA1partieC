#ifndef FILEGENERATOR_H_INCLUDED
#define FILEGENERATOR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define SeekValue 76
#define ChoiceOne 49
#define ChoiceTwo 50
#define ChoiceThree 51
#define ChoiceFour 52
#define ChoiceFive 53
#define QuoteMark 34

FILE *fileptr;
void paramFileCreator();
void paramFileInitialize();
void paramFileWriter(int choiceValue);
int valueConverter(int toConvertNum);
void generateFile();

#endif // FILEGENERATOR_H_INCLUDED
