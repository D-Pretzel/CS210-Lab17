/** lab17-06.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/

#include "lab17functs.h"

int main(void)
{
   int min;
   int max;
   int array[] = {-4, 4, 5, 10, -10};
   int size = 5;

   getMinMax(array, size, &min, &max);

   return 0;

}