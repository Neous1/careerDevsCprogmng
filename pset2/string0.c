#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("provide a string\n");
    string s = get_string(); 
    if (s != NULL)
    {
        for (int i =0; i < strlen(s); i++)
        {
            printf("%c\n", s[i]);
        }
    }    
}