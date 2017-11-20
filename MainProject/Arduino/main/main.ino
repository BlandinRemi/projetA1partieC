#include "coeur.h"
#include "cardio.h"

unsigned long time1;
unsigned long timeLast = 0;
int value;
int valueLast;

void setup() {
  ini();
}

void loop() {

 getPulse(&value, &valueLast, &time1, &timeLast);
 choix();

}
