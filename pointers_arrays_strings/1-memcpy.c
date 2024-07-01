#include "main.h"

/**
 * _memcpy - Copies memory area
 * @n : Bytes
 * @src : Source
 * @dest : destination
 *
 * Return: Pointer the copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
