#include<stdio.h>
#include<cs50.h>
#include<math.h>

int sumPrimes(int num);

int main (void)
{
    //prompt user for num
    printf("Give me a number: ");
    int num = get_int();
    int result = sumPrimes(num);
    printf(" Summed up primes is :%d\n", result);
}

int sumPrimes(int num)
{
    //find prime of num
    // loop thru the num 
    int i, j;
    int sum = 0;
    
    // loop thru num 
    for(i=2;i<=num;i++)
    {
    //loop thru i to compare it to j 
      for ( j = 2; j<i; j++)
      {
        if(i%j == 0){
          break;
          // printf("that's odd");
        }
      }
      if (i == j){
        sum += i;
            // printf(" 43 : %d\n", i);
      }
    }

    return sum;
}
