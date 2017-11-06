#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void caesar(int k);

int main(int argc, string argv[])
{
    if (argc != 2){
        printf("Please provide a positive number\n");
        return 1;
    }
    //convert command-line input to int
    string code = argv[1];
    int k = atoi(code);
    
    caesar(k);

    printf("\n"); // ends the program
    return 0;
}

void caesar(int k)
{
    char c; 
    int num;
    char letter;

    // printf("15 .The code is:  %d\n", k);
        printf("plaintext: ");
    string message = get_string();
    // printf("%s\n", message);
        printf("ciphertext: ");
    // loop thru message and encrypt each characters
    for(int i = 0, len = strlen(message);i < len; i++)
    {
        // printf("character @ index %d is : %c\n", i,message[i]);  
        letter = message[i];
            
        if(isalpha(message[i])) // check if character is a letter and upper case
        {
            // printf("34 .%c is a letter\n", message[i]);
            if( isupper(letter))
            {
                // printf("37 . %c  is upper\n", letter);
                /*
                determine the Alphabetical index of the message[i] (0-25)
                k is the number passed in command line
                mod 26 insures a wrap around from Z to A
                */
                num = ((letter -65)+ k) % 26;  // 
                // printf("39 .num is : %d\n", num);
                c = num + 65;
                // printf("41 . %c is %c\n  ", message[i] , c);
                printf("%c",c);
            }
            else 
            {
            // printf("44 .%c is NOT upper\n", letter);
                num = ((letter -97)+ k) % 26; 
                // printf("46 .num is : %d\n", num);
                c = num + 97;
                // printf("48 . %c is %c\n  ", message[i], c);  
                printf("%c",c);
            }
        }
        else{ //  if message[i] is not a letter print the given character as is.
            printf("%c",letter);
        }
    }
}
