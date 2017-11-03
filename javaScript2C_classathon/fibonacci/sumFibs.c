#include <stdio.h>
#include <cs50.h>

int sumFibs (int num);

int main(void)
{
    // int curFib = 1, priorFib = 0, 
    int num = 0;
        // int num = 0;
    printf("number please: ");
    num = get_int();
    int result = sumFibs(num);
    printf("The result is : %d\n", result);
    
}

int sumFibs (int num){
    int sum = 0,  curFib = 1, priorFib = 0;
    // printf("get me a number\n");
    // sum = get_int();
    while (curFib <= num)
    {        
        // printf(" 24. %d\n", num);
        // printf(" 25. %d\n", curFib);
        if(curFib % 2 != 0)
        {
            sum += curFib; 
        }
        
        int temp = priorFib;
        priorFib = curFib;
        curFib += temp;
    }
    return sum ;
}