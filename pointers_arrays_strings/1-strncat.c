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

	while (*dest != '\0') /* Get to the end of dest */
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest_string);
}
