#include<stdio.h>
#include<cs50.h>
#include<math.h>

int sumPrimes(int num);

int main (void)
{
    //prompt user for num
    printf("Give me a number");
    int num = get_int();
    int result = sumPrimes(num);
    printf("%d\n", result);
}

int sumPrimes(int num)
{
    //find prime of num
    // loop thru the num 
    int sum = 0;
    for(int i = 2 ; i<= num - 1; i++)
    {
        if (num % i == 0){
            return 0;
        }
    }
    if ( i == num){
        return 1;
    }
}








//     int isPrime(num){     
//         int d = get_int();
//       d = Math.floor(Math.sqrt(x)); // Math floor is necessary.
//       while (d > 1){
//         if ((x % d) === 0){
//           return false;
//                   }
//         d--;
//       }
//       return true;
//     }
// // console.log("is it prime: ", isPrime(2));
  
//   var arr = [];
//   for (var i = 2; i <= num; i++){
//     // console.log(i);
//     if (isPrime(i)){
//       arr.push(i);
//       // console.log("anything ", i);
//       }
//     }

//   return arr.reduce(function(acc, val) {
//     return acc + val;
//   },0);