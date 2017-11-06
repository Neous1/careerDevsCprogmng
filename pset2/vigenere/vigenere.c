#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void vigenere(string key);

int main(int argc, string argv[])
{

    // int team;
        if (argc != 2 ){
        printf("missing a parameter\n");
        return 1;
    }
    string key = argv[1];
    for(int k = 0, klen = strlen(key); k < klen ; k++){
        if(!isalpha(key[k])){
            printf("code must me in letters only\n");
            return 1;
        }
        // printf("%d\n", key[k]);
        // team = key[k] % klen;
        // printf("key %d is on team %d\n",key[k], team );
    }

    vigenere(key);
    
    printf("\n"); // ends the program
    return 0;
}

void vigenere(string key)
{
    printf("Plaintext: ");
    string plaintext = get_string();
    // printf("%s\n", plaintext);
    printf("ciphertext: ");
    
    char c; 
    int num; 
    int knum;
    char letter;
    int klen = strlen(key);
    for (int i = 0 , j = 0, plen = strlen(plaintext); i < plen; i++)
    {
        // printf("character @ index %d is : %c\n", i,plaintext[i]);  
        letter = plaintext[i];
            
        if(isalpha(letter)) // check if character is a letter and upper case
        {
            if( isupper(letter))
            { 
                    //convert all char to lowercase
                    key[j] = tolower(key[j]);
                    //convert each letter to its alphabetical index
                    knum = (key[j]-97);// % 26)+ 97;
  
                    /*
                    determine the Alphabetical index of the message[i] (0-25)
                    k is the number passed in command line
                    mod 26 insures a wrap around from Z to A
                    */

                    num = ((letter - 65)+ knum) % 26;  // 
                   
                    // printf("39 .num is : %d\n", num);
                    c = num + 65;
                    j++;
                    j = j % klen; //wrapping around length of key
                    printf("%c", c);

            }
            if( islower(letter))
            { 
                    key[j] = tolower(key[j]);
                    knum = (key[j]-97);// % 26;
                    /*
                    determine the Alphabetical index of the message[i] (0-25)
                    k is the number passed in command line
                    mod 26 insures a wrap around from Z to A
                    */
      
                    num = ((letter - 97)+ knum) % 26;  // 
                    // // printf("39 .num is : %d\n", num);
                    c = num + 97;
                    j++;
                    j = j % klen;
                    printf("%c", c);
            }    

        }
        else{
            printf("%c",letter);   
        }
    }
}

