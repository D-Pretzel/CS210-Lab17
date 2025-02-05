/** lab17functs.h
* ===========================================================
* Name:
* Section:
* Project: Lab 17
* Purpose:
* ===========================================================
*/

#ifndef LAB17FUNCTS_H
#define LAB17FUNCTS_H

#include <stdio.h>
#include <string.h>
#include <math.h>

//loadVals takes a pointer to an integer array
int loadVals(int vals[]);

void reversePrint(int array[], int size);

int countVowels(char word[]);

int analyzeValues(double array[], int size);

int performOperation(char operation, int first, int second);

void getMinMax(int array[], int size, int* min, int* max);

#endif