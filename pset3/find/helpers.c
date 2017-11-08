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
    //value => int needle = atoi(argv[1]);
    //value[] => int haystack[MAX]
    // n => int size;
    
    for (int i = 0; i<n; i++){
        if ( value == values[i]){
            return true;
        }
        // else
        //     return false;
        
    }
    
    
    // TODO: implement a searching algorithm
    /*
    Search
        return true if value is fond in haystack
        return false if value is not in haystack
        
    Linear search: 
        O(n) -> slow
        Can search any list
    binary search
        O(log n) -> fast
        can only search sorted lists
        */
        
        /*
        
    Get a list 
    sort the list 
    apply binary search
    
    
        
        */
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    return;
}
