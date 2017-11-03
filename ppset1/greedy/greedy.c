#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
int main(void){

    
    float change;

    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;    
    int bucket = 0;
    
    
    do
    {
        printf("how much are you owed \n$");
        change = get_float();        
    }
    
    while(change <= 0);
        change = round(change*100);
    
    while (change >= quarter)
    {
            change  -= quarter;
            bucket++;

    }
        while (change >= dime)
    {
            change  -= dime;
            bucket++;

    }
        while (change >= nickel)
    {
            change  -= nickel;
            bucket++;

    }  
        while (change >= penny)
    {
            change  -= penny;
            bucket++;

    }      
    printf("%i\n",bucket);
    
    // printf("how much are you owed\n");
    //  change = get_float();
       
}