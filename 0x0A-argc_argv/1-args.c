#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: firts input
 * @argv: second input
 * Return: Always (Success)
 */

int main(int argc, char *argv[])
{
	int count, i;

	(void) argv;
	for (i = 0; i < argc; i++)
	{
		count = i;
	}
	printf("%d\n", count);
	return 0;
}
