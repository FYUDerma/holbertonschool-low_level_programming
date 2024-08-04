#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to extract (starting from 0).
 * Return: The value of the bit at index `index` or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted_n;
	int bit_value;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	shifted_n = n >> index;
	bit_value = (shifted_n & 1);

	return (bit_value);
}
