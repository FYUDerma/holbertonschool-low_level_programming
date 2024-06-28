#include "main.h"
#include <stdio.h>

/* _strcat - Concatenates two strings
 * @dest : Destination
 * @src : Source
 * 
 * Return : resulting string
 */

char *_strcat(char *dest, char *src)
{
    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
    }
    return (dest);
}