#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // printf("Please provide your name\n");
    string name = get_string();
    // string name = "john Smith huey Arring";
    
    if (name != NULL);
    {
        for (int j = 0; j < strlen(name); j++)
        //check for space in the beginning of string
            if (name[0]!=' ')//&& name[1] != ' ')
            {
                printf("%c",toupper(name[0]));        
            }
            else if (name[j]==' '&& name[j+1] != ' ')
            {
                printf("%c",toupper(name[j+1]));
            }
            
        for (int i = 1, n = strlen(name); i < n; i++ )
        {
            
            if(name[i] == ' ' && name[i+1] != ' ')
            {
               printf("%c",toupper(name[i+1]));
            }     
                           
            else if (name[i+2] == ' ')
            {
                i++;
            }
        
        }
        printf("\n");
    }    
}
    

    
    
