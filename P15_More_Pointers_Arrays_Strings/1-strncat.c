#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings
 * @dest : Destination
 * @src : Source
 * @n : bytes number
 *
 * Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_string = dest;
	int index = 0;

	while (*dest != '\0') /* Get to the end of dest */
	{
		dest++;
	}

	for (; index < n && src[index] != '\0'; index++)
	{
		*dest = src[index];
		dest++;
	}

	*dest = '\0';
	return (dest_string);
}
