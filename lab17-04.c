/** lab17-04.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/
#include <stdio.h>

int main(void)
{
   int rating;
   printf("Survey response scale 10 - Outstanding, 8-9 - Excellent, 6-7 - Good, 5 - Average, 3-4 Below Average, 1-2 - Awful, 0 - Horrible.\n");
   printf("Enter an integer value from 0-10 corresponding to your opinion of Coockies 'n Cream ice cream:");
   scanf("%i", &rating);

   switch (rating){
      case 10:
         printf("Outstanding");
         break;
      case 8:
      case 9:
         printf("Excellent");
         break;
      case 7:
      case 6:
         printf("Good");
         break;
      case 5:
         printf("Average\n");
         break;
      case 4:
      case 3:
         printf("Below Average");
         break;
      case 2:
      case 1:
         printf("Awful");
         break;
      case 0:
         printf("Horrible");
         break;
      default:
         printf("You did not enter a value between 0 and 10.\n");
         break;
   }
   return 0;
}