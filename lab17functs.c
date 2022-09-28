/** lab17functs.c
* ===========================================================
* Name:
* Section:
* Project: Lab 17
* Purpose:
* ===========================================================
*/
#include "lab17functs.h"

int loadVals(int vals[]){
    int count = 0;
    int val;
    do {
        printf("Enter an integer (negative value to end): ");
        scanf("%i", &val);
        if (val >= 0) {
            vals[count] = val;
            count++;
        }
    } while (val >= 0);

    return count;
}

//Print every other item in the array starting with the last one
void reversePrint(int array[], int size){
    for (int i = size - 1; i >= 0; i -= 2) {
        printf("%i\n", array[i]);
    }
}