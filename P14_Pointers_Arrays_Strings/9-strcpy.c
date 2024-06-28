#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _strcpy - copy to destination
 * @dest : destination
 * @src : source
 *
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	char *initial_dest = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (initial_dest);
}
