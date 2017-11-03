#include <cs50.h>
#include <stdio.h>
#include <string.h>
// #include <stlib.h>

// string message;
int main(int argc, string argv[])
{
    if (argc != 2){
        printf("Please provide a positive number\n");
    }
    string code = argv[1];
    int k = atoi(code);
    
    char c; 
    int num;
    printf("15 . %d\n", k);
        printf("What is the message: ");
    string message = get_string();
    // printf("%s\n", message);
    for(int i = 0, len = strlen(message);i < len; i++){
        // printf("20 . %d\n", len);
        printf("%c\n", message[i]);
         num = ((message[i] -65)+ k) % 26; 
        printf(" num is : %d\n", num);
        c = num + 65;
        printf("char is %c  ", c);
    } 

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