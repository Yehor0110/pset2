/*
*   initials.c
*
*   Valentiukevych Yehor
*
*   check50 --> https://sandbox.cs50.net/checks/309d244e00104625911de7eb57f88310
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //printf("Enter your name: ");
    string name = GetString();
    if ( name != NULL)
    {
        printf( "%c", toupper (name[0]) ); // печать первого символа, преобразовать в верзний регистр
        for(int i = 0, n = strlen(name); i < n; i++)
        {
            if(name[i] == ' ')
            {
                i++;
                printf("%c", toupper (name[i]) );
            }
        }
    }
    printf("\n");
}
