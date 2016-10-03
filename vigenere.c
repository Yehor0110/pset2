/*
*
*   Валентюкевич Егор
*
*     [hcs-201608]
*
*      vigenere.c
*
*      check50 --> https://sandbox.cs50.net/checks/66405f1e052347dfa6dfe352449a739d
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> 
#include <math.h>

#define UPPERC 65
#define LOWERC 97

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Error:(\n");
        return 1;
    }
    
    string key = 0;
    key = argv[1];
    
    int lengthK = strlen(key);
    int s, i = 0;
    
    for(s = 0; s < lengthK; s++)
    {
        if(!isalpha(key[s]))
        {
            printf("error=(");
            return 1;
        }
    }
    
    char cipher = 0;
    
    printf("plaintext: ");
    string text = GetString();
        
    printf ("ciphertext: ");
    for(int j = strlen(text); i < j; i++)
    {
        if(isalpha (text[i]))
        {
            if(s % lengthK == 0)
            s = 0;
            
            if(isupper (text[i]))
            {
                if(isupper (key[s]))
                {
                    cipher = (((text[i] - UPPERC) + (key[s] - UPPERC)) % 26) + UPPERC;
                    printf("%c", cipher);
                    s++;
                }
                else
                {
                    cipher = (((text[i] - UPPERC) + (key[s] - LOWERC)) % 26) + UPPERC;
                    printf("%c", cipher);
                    s++;
                }
            }
            else
            {
                if(isupper (key[s]))
                {
                    cipher = (((text[i] - LOWERC) + (key[s] - UPPERC)) % 26) + LOWERC;
                    printf("%c", cipher);
                    s++;
                }
                else
                {
                    cipher = (((text[i] - LOWERC) + (key[s] - LOWERC)) % 26) + LOWERC;
                    printf("%c", cipher);
                    s++;
                }
            }
        }
        else
        printf("%c", text[i]);
    }
 printf("\n");
}
