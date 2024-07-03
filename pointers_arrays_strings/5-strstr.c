#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main C string to be scanned
 * @needle: the small string to be searched within haystack
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);

}
