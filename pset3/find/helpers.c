/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm

    //value => int needle = atoi(argv[1]);
    //value[] => int haystack[MAX]
    // n => int size;
    
    // loop thru the list 

    for (int i = 0; i<n; i++){
        if ( value == values[i]){
            // printf("The needle is :%i\n",value);
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    int i, temp, swapped;
    
        printf(" array is %i\n", values[n]);
    
    while(1){
        swapped = 0;
        for (i = 0; i < n -1 ; i++){
            if(values[i] > values[i +1]){
                temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                swapped = 1;
            }
        }
        
        if(swapped == 0){
            break;
        }
    }
    
        printf(" array is %i\n", values[n]);

    return;
}

