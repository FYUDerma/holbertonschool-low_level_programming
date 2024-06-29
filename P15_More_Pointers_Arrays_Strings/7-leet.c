#include "main.h"

/**
 * leet - encodes string in 1337
 * @s: string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char *letter = "aAeEoOtTlL";
	char *rot = "4433007711";
	char *temp = s;
	int	index;

	while (*temp)
	{
		index = 0;
		while (letter[index])
		{
			if (letter[index] == *temp)
				*temp = rot[index];
			index++;
		}
		temp++;
	}
	return (s);
}
