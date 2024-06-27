#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _atoi - convert all sprint in integer
 * @s : string
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int len, password;
    int index;

    len = 24;

    /* lowercase Caracter */
    char low[26];

    for (index =0; index < 26; index++)
    {
        low[index] = 'a' + index;
    }

    /* uppercase Caracter */
    char upp[26];

    for (index = 0; index < 26; index++)
    {
        upp[index] = 'A' + index;
    }

    /* special Caracter */
    char carac[] = "!@#$%^&*()_+[]{}|;:',.<>?/`~";

    /* Digit */

    int num[10];

    for (index = 0; index < 10; index++)
    {
        num[index] = '0' + index;
    }
}