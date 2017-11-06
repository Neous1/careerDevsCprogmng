#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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
    printf("Plaintext: ");
    string plaintext = get_string();
    // printf("%s\n", plaintext);
    printf("ciphertext: ");
    
    char c; 
    int num; 
    int knum;
    char letter;
    int klen = strlen(key);
    for (int i = 0, j = 0, plen = strlen(plaintext); i <= plen; i++)
    {
        // printf("character @ index %d is : %c\n", i,plaintext[i]);  
        letter = plaintext[i];
            
        if(isalpha(letter)) // check if character is a letter and upper case
        {
            if( isupper(letter))
            {            
                // for (int j = 0 ,klen = strlen(key); j < klen ;)
                // { //klen = strlen(key)
                    //convert all char to lowercase
                    key[j] = tolower(key[j]);
                    //convert each letter to its alphabetical index
                    knum = (key[j]-97);// % 26)+ 97;
                    // printf("48 . key[j] is %i\n", knum);
                    
                    // if((letter % klen) == (key[j] % klen))
                    // {
                    /*
                    determine the Alphabetical index of the message[i] (0-25)
                    k is the number passed in command line
                    mod 26 insures a wrap around from Z to A
                    */

                    num = ((letter -65)+ knum) % 26;  // 
                   
                    // printf("39 .num is : %d\n", num);
                    c = num + 65;
                    // printf("56 . %c becomes %c  ", letter , c);
                    // printf("61 . %c",c);   
                    // letter += knum;
                    // printf("%c", letter);
                    j++;
                    j = j % klen; 
                    printf("%c", c);
                    // }
                    // break;
                // }
            }
            if( islower(letter))
            {            
                // for (int j = 0 ,klen = strlen(key); j < klen ; j++)
                // { //klen = strlen(key)
                    //convert all char to lowercase
                    key[j] = tolower(key[j]);
                    //convert each letter to its alphabetical index
                    knum = (key[j]-97);// % 26;
                    // printf("key[j] is %i\n", knum);
                    
                    // if((letter % klen) == (key[j] % klen))
                    // {
                    /*
                    determine the Alphabetical index of the message[i] (0-25)
                    k is the number passed in command line
                    mod 26 insures a wrap around from Z to A
                    */
      
                    num = ((letter -97)+ knum) % 26;  // 
                    // // printf("39 .num is : %d\n", num);
                    c = num + 97;
                    // // printf("56 . %c is %c  ", letter , c);
                    // printf("%c",c);                        
                    // }
                    // letter += knum;
                    j++;
                    j = j % klen;
                    printf("%c", c);
                // }
            }              

        }
        else{
            printf("%c",letter);   
        }
        
        // break;
    }



    // char c; 
    // int num;
    // char letter;

    // printf("15 .The code is:  %d\n", k);
    //     printf("Plaintext: ");
    // string message = get_string();
    // printf("%s\n", message);
    //     printf("ciphertext: ");
    // // loop thru message and encrypt each characters
    // for(int i = 0, len = strlen(message);i < len; i++)
    // {
    //     // printf("character @ index %d is : %c\n", i,message[i]);  
    //     letter = message[i];
            
    //     if(isalpha(message[i])) // check if character is a letter and upper case
    //     {
    //         // printf("34 .%c is a letter\n", message[i]);
    //         if( isupper(letter))
    //         {
    //             // printf("37 . %c  is upper\n", letter);
    //             /*
    //             determine the Alphabetical index of the message[i] (0-25)
    //             k is the number passed in command line
    //             mod 26 insures a wrap around from Z to A
    //             */
    //             num = ((letter -65)+ k) % 26;  // 
    //             // printf("39 .num is : %d\n", num);
    //             c = num + 65;
    //             // printf("41 . %c is %c\n  ", message[i] , c);
    //             printf("%c",c);
    //         }
    //         else 
    //         {
    //         // printf("44 .%c is NOT upper\n", letter);
    //             num = ((letter -97)+ k) % 26; 
    //             // printf("46 .num is : %d\n", num);
    //             c = num + 97;
    //             // printf("48 . %c is %c\n  ", message[i], c);  
    //             printf("%c",c);
                
    //         }
    //     }
    //     else{ //  if message[i] is not a letter print the given character as is.
    //         printf("%c",letter);
    //     }
    // }

    printf("\n"); // ends the program
    return 0;
}

