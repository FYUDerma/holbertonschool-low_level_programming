#include "variadic_functions.h"

/**
 * print_numbers - print all the numbers
 * @n: number of parameters
 * @separator: separator between numbers
 *
 * Return: return the sum of the parameters
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
		{}
	else
		separator = ", ";

	for (i = 0; i < n; i++)
	{
		result = va_arg(arg, int);
		printf("%d%s", result, separator);
		if (i == n - 1)
			printf("%d", result);
	}
	printf("\n");
	va_end(arg);
}
