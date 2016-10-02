/*
*
*   Валентюкевич Егор
*
*     [hcs-201608]
*
*      caesar.c
*
*      check50 --> https://sandbox.cs50.net/checks/b7b76e74c3a5480390e166586ae368b2
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> 
#include <math.h>

#define UPPER 65
#define LOWER 97

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Error:(\n");
        return 1;
    }
    
    int key = 0;
    key = atoi (argv[1]); // преобразовать argv[1] в Int
    
    if ((key < 1) || (key == 0)) 
    {
        printf("Enter one positive integer\n");
        return 1;
    }
    else
    {
        printf("plaintext: ");
        string text = GetString();
        
        printf ("ciphertext: ");
        for(int i = 0, j = strlen(text); i < j; i++)
        {
            if(isalpha (text[i])) //проверяет наличие алфавитного символа;
            {
                int cipher = text[i];
                
                 /***
                 * 
                 * 1) преобразовать значение ASCII в буквы
                 * 2) + ключ шифра
                 * 3) найти остаток от деления нацело 
                 * 4) обратное преобразование в ASCII-код
                 * 5) печать символов на экран
                 * 
                 ***/
                
                if(isupper (cipher))
                {
                   cipher = (((cipher - UPPER) + key) % 26) + UPPER;
                   printf("%c", cipher);
                }
                
                if(islower (cipher))
                {
                    cipher = (((cipher - LOWER) + key) % 26) + LOWER;
                    printf("%c", cipher);
                }
            }
            else
            printf("%c", text[i]);
        }
    }
    
    printf("\n");
}
