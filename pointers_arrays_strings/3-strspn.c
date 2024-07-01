#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s : initial segment
 * @accept : accept
 *
 * Return: Lenght of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
		unsigned int count = 0;
		int index, aindex;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (aindex = 0; accept[aindex] != '\0'; aindex++)
		{
			if (s[index] == accept[aindex])
			{
				break;
			}
		}
		if (accept[aindex] == '\0')
		{
			break;
		}
		count++;
	}

	return (count);
}
