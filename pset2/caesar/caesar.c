#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// string message;

    // string isalpha();
    // char isupper(), islower();

int main(int argc, string argv[])
{

    
    if (argc != 2){
        // printf("Please provide a positive number\n");
    }
    string code = argv[1];
    int k = atoi(code);
    
    char c; 
    int num;
    char letter;

    printf("15 .The code is:  %d\n", k);
        printf("What is the message: ");
    string message = get_string();
    printf("%s\n", message);
        printf("ciphertext: ");
    // loop thru 
    for(int i = 0, len = strlen(message);i < len; i++)
    {
        
        // printf("character @ index %d is : %c\n", i,message[i]);  
        letter = message[i];
            
        if(isalpha(message[i]))
        {
            // printf("34 .%c is a letter\n", message[i]);
            if( isupper(letter))
            {
                // printf("37 . %c  is upper\n", letter);
                num = ((letter -65)+ k) % 26; 
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
        else{
            printf("%c",letter);
        }
    } 

    printf("\n");
    return 0;
}

