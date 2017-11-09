/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
// implement a binary search
for(int i = 0; i < n ; i++){
    printf("to be searched %d\n", values[i]);
}
// s = start, m = midle for section , e = end 
int s = 0, e = n  , m = floor((s + e)/2);

while (s <=e)
{
    // find the middle
    m = floor((s + e)/2);
    printf("Middle is %d\n", values[m]);
    if(values[m] == value){
        return true;
    }
    if(values[m] > value){
        // move e to the middle and reset the middle
        e = m -1;
    printf("36 . right middle is %d\n", values[e]);
    }
    else{
        // n is in the right side so we move s to mid and reset the middle
        s = m + 1;
            printf("42 . left middle is %d\n", values[s]);
    }
}

// linear search
    // for (int i = 0; i < n; i++){
    //     if ( value == values[i]){
    //         // printf("The needle is :%i\n",value);
    //         return true;
    //     }
    // }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int i = 0, temp, swapped;
    
    // for (i = 0; i < n-1 ; i++)
    // {
    //     printf("beginning array is %i\n", values[i]);   
    // }
        
    do 
    {
        swapped = 0;
        for (i = 0; i < n-1 ; i++)
        {
            // printf("temp %i\n", temp);
            // printf("values[i] %i\n", values[i]);
            // printf("values[i +1] %i\n", values[i +1]);
            // printf("----------break-----------\n");
    
            if(values[i] > values[i +1])
            {
                // printf("temp %i\n", temp);
                temp = values[i];
                // printf(" i is temp %i\n", temp);
                values[i] = values[i + 1];
                // printf("values[i] %i\n", values[i]);
                // printf("")
                values[i + 1] = temp;
                // printf(" values[i + 1] %i\n", values[i + 1]);

                swapped = 1;
            }
        }
            if(swapped == 0){
                break;
             }
    }
    
    while(true);
    
    // printf("---------------------\n");
    //     for (i = 0; i < n ; i++)
    //     {
    //         printf("Sorted array is %i\n", values[i]);   
    //     } 
    return;
}

