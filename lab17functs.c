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

int countVowels(char word[]){
    int count = 0;
    for (int i = 0; i < strlen(word); i++) {
        switch (word[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                count++;
                break;
            default:
                break;
        }
    }
    return count;
}

int analyzeValues(double array[], int size){
    //Returns how many how many values are within one standard deviation of the mean
    double mean = 0;
    double stdDev = 0;
    double sum = 0;
    double sumOfSquares = 0;
    int count = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    mean = sum / size;
    printf("The average for this array is: %f", mean);
    for (int i = 0; i < size; i++) {
        sumOfSquares += pow(array[i] - mean, 2);
    }
    stdDev = sqrt(sumOfSquares / size);
    printf("The standard deviation for this array is: %f", stdDev);
    for (int i = 0; i < size; i++) {
        if (array[i] >= (mean - stdDev) && array[i] <= (mean + stdDev)) {
            count++;
        }
    }
    return count;
}
