#include <arduino.h>
#include "cardio.h"


int getPulse(int *value, int *valueLast, unsigned long *time1, unsigned long *timeLast) {

int i;
  *value = analogRead(0);
  //Serial.println(*value);
  if(*value > 200 && *valueLast < 200)
  {
    *time1 = millis();
    if(*time1 > *timeLast + 600)
    {
      Serial.print(*time1);
      Serial.print(";");
      Serial.print(60000/(*time1-*timeLast));
      Serial.print(";");
      Serial.println("");
      
      for(i=3; i<=12; i++)
      {
        digitalWrite(i, HIGH);
      }
      delay(50);
      for(i=3; i<=12; i++)
      {
        digitalWrite(i, LOW);
      }
      *timeLast = *time1;
    }
   }
   *valueLast = *value;
}




