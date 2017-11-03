#include<stdio.h>
#include<cs50.h>

//declare external func
long long factorialize(int num);

int main(void)
{    // int num = 0;

    printf("Please give us a number: ");
    int num = get_int();
    int result = factorialize(num);
    printf("%d\n", result);

}
//declare external funct pass it the number given by users

long long factorialize(int num)
{
        // avoid multiplying by 0 by returning 1 if user enters 0

    if (num == 0)
    {
        return 1; 
    }
    // loop thr num starting at num -1 and decrease num til num -1

    for (int i = num -1 ; i >=1; i --)
    {
        num *= i;
    }
    return num; 
}
