/*
Try to establish a relationship between 
(a) the height the user would like the pyramid to be, 
(b) what row is currently being printed, and 
(c) how many spaces and how many hashes are in that row. 
Once you establish the formula, you can translate that to C!
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;
    do 
    {
        printf("give me a number, any number\n");
        height = get_int();  
    }
    while (height < 0 || height > 23);
    {
        // int height = 5;
        // char bricks = '#';
        char space = ' ';
        int tempBricks = 1;
        int tempSpace = 0;
        int diff = 0;
    
        for (int row = 0; row < height ; row++)
        {
            // printf("-");
            // tempSpace = height - tempBricks;
            for (diff = height - tempBricks; diff > 0; diff--)
            {
                printf("%c", space);
                // printf("#");
            }        
            for (tempSpace = 0; tempSpace < tempBricks + 1; tempSpace++ )
            {
                printf("#");
            }    
            tempBricks++;
            printf("\n");     
        }
    }
}
