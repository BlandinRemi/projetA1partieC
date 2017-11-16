#include "filegenerator.h"

void paramFileCreator() {
  fileptr = fopen("param.h","w");
  if (fileptr != 0) {
    fclose(fileptr);
  } else {
    printf("unable to create the file.");
  }
}

void paramFileInitialize() {
  fileptr = fopen("param.h","w+");
  if (fileptr != 0) {
    fprintf(fileptr,"#ifndef param_h\n");
    fprintf(fileptr,"#define param_h\n");
    fprintf(fileptr,"#include %carduino.h%c\n",QuoteMark,QuoteMark);
    fprintf(fileptr,"#define choiceValue x\n");
    fprintf(fileptr,"#endif // param_h\n");
    fclose(fileptr);
  } else {
    printf("wasn't able to open the file.");
  }
}


void paramFileWriter(int choiceValue) {
  int convertedNumber;
  convertedNumber = valueConverter(choiceValue);
  fileptr = fopen("param.h","r+");
  if (fileptr != 0) {
    fseek(fileptr, SeekValue, SEEK_SET);
    fputc(convertedNumber,fileptr);
    fclose(fileptr);
  } else {
    printf("wasn't able to open the file.");
  }
}

int valueConverter(int toConvertNum) {
  int convertedValue;
  switch (toConvertNum)
  {
    case 1:{
    convertedValue=ChoiceOne;
    break;
    }
    case 2:{
    convertedValue=ChoiceTwo;
    break;
    }
    case 3:{
    convertedValue=ChoiceThree;
    break;
    }
    case 4:{
    convertedValue=ChoiceFour;
    break;
    }
    case 5:{
    convertedValue=ChoiceFive;
    break;
    }
    default:{
    printf("Value not admitted");
    break;
    }
  }
return convertedValue;
}

void generateFile() {
  paramFileCreator();
  paramFileInitialize();
}
