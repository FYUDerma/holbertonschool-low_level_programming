#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @n : Bytes
 * @s : Memory Area
 * @b : Constant Byte
 *
 * Return: Pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n--)
	{
		*temp++ = b;
	}
	return (s);
}
