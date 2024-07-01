#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s : String
 * @c : Character in the string
 *
 * Return: Pointer the copied memory
 */

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
