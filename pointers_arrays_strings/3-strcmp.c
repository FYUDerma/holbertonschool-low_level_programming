#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compare two string
 * @s1 : string 1
 * @s2 : string 2
 *
 * Return: the value in hex
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '0' && s2[index] != '0'; index++)
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
	}
	return (s1[index] - s2[index]);
}