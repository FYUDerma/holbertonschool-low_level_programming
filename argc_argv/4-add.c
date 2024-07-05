#include "main.h"

/**
 * main - Entry point
 * @argc : Argc (count)
 * @argv : Argv (vector)
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	int is_digit = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					is_digit = 0;
					break;
				}
			}
			if (!is_digit)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
