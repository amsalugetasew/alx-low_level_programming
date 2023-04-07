#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints multiplication of argument value
 * @argc: firts input
 * @argv: second input
 * Return: Always (Success)
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);

		}
		printf("%d\n", mult);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (0);
}
