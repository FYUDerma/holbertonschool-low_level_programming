#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string
 * @dest : Destination
 * @src : Source
 * @n : String
 *
 * Return: resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
