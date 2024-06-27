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

void main(void)
{
    int len, password;

    len = 24;

    /* lowercase Caracter */
    char min[26];
    int index;

    for (index =0; index < 26; index++)
    {
        min[index] = 'a' + index;
    }

    /* uppercase Caracter */
    char upp[26];

    for (index = 0; index < 26; index++)
    {
        upp[index] = 'A' + index;
    }

    printf("%c ", min[index]);
    printf("%c ", upp[index]);
}