#include<stdio.h>
#include<cs50.h>



int main()
{

    printf("How long was your shower\n");
    int time = get_int();
    while(time >0){
        int bottles = 12*time;
        printf("You took a %imn shower, and you used %i bottles\n\n",time, bottles);
        break;
    }
}