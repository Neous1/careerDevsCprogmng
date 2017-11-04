#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// string message;

string isalpha();
char isupper();
int main(int argc, string argv[])
{
    if (argc != 2){
        printf("Please provide a positive number\n");
    }
    string code = argv[1];
    int k = atoi(code);
    
    // char c; 
    // int num;
    char letter ;
    string ciphertext =" ";
    printf("15 .The code is:  %d\n", k);
        printf("What is the message: ");
    string message = get_string();
    // printf("%s\n", message);
    for(int i = 0, len = strlen(message);i < len; i++){
        // printf("25 . %c\n", message[i]);
            letter = message[i];
        if(!isalpha(letter))
        {
            ciphertext += letter;
            printf("31. %s\n", ciphertext);
        }
            /*
        if (isalpha(message[i]))
        {
            printf("28 .%c is a letter\n", message[i]);
            if(isupper(letter))
            {
                printf("32 . %c  is upper\n", letter);
                num = ((letter -65)+ k) % 26; 
                printf("34 .num is : %d\n", num);
                c = num + 65;
                printf("37 .char is %c\n  ", c);
            }
            else
            printf("40 .%c is NOT upper\n", letter);
                num = ((letter -97)+ k) % 26; 
                printf("42 .num is : %d\n", num);
                c = num + 97;
                printf("44. char is %c\n  ", c);            
        }
        else{
            printf("43. %c is NOT a letter \n", message[i]);
        }*/
    } 
    // return 0;
}


/*
Get the key
if argc != 2 => throw error

string code = argv[1]
int k = atoi(code)

get the plaintext
    get_string()
encipher
    one character
    entire plaintext
print ciphertext




get key form command line argument
run key intor integer
prompt for plaintextr
for each character in the plaintext string
    if alphabetic 
            isalpha()
            isupper()
            islower()
        preserve case
        shift plaintext character by key
print ciphertext

*/