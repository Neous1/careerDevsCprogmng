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
    int i =0, temp, swapped;
            for (i = 0; i < n ; i++)
        {
        printf("beginning array is %i\n", values[i]);   
        }
        do 
        {
            swapped = 0;
            for (i = 0; i < n-1 ; i++)
            {
                if(values[i] > values[i +1])
                {
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
    
    while(true);
    
    printf("---------------------\n");
        for (i = 0; i < n ; i++)
        {
            printf("Sorted array is %i\n", values[i]);   
        } 
    return;
}

