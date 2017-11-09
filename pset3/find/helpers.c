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
/**
 * print the array generated
 * Do
     * set isSorted to false to start theloop
     * loop thru the arra
         *  if array_i is greater than array_i +1
         * temp =  array_i
         * array_i = array_i + 1
         * array_i + 1 = temp
     * set isSorted to true to stop the loop
     * 
     * if isSorted is == 0
     *      break
     * 
     * while array is not sorted.
     * 
     * /
     * 
     */
     
    //  for(int i = 0; i < n; i++){
    //     printf(" it was %i \n", values[i]);
    //  }
    




    // TODO: implement a sorting algorithm
    int i =0, temp, swapped;
            for (i = 0; i < n ; i++)
        {
         
        printf("beginning array is %i\n", values[i]);   
        }
        do 
        {
            swapped = 0;
            for (i = 0; i < n ; i++)
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
                    // printf("Ending array is %i\n", values[i]);

        }
    
    while(1);
    
    printf("---------------------\n");
                for (i = 0; i < n ; i++)
        {
            
         
        printf("Sorted array is %i\n", values[i]);   
        }    // printf("Ending array is %i\n", values[i]);
    
    
    return;
}

