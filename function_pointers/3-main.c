#include "3-calc.h"
#include "main.h"
#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Pointer to an array containing the parameters
 * Return: Always zero
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);
	int a, b;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if (*s != '+' && *s != '/' && *s != '-' && *s != '%' && *s != '*')
	{
		printf("Error\n");
		exit(99);
	}

	f = get_op_func(s);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(a, b));
	return (0);
}
