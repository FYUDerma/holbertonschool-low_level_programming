#include "main.h"

/**
 * main - Entry point
 * @argc : Argc (count)
 * @argv : Argv (vector)
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i; /* Index Variable */

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
