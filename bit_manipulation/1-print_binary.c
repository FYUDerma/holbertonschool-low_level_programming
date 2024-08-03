/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print.
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = 1;

	if (n == 0)
		_putchar('0')
		return;

	temp <<= 63;
	while (temp != 0)
	{
		if ((n & temp) != 0)
			_putchar('1');
		else
			_putchar('0');
		temp >>= 1;
	}

}
