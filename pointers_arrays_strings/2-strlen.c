#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _strlen - Print the lenght of the string
 * @s : string
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
