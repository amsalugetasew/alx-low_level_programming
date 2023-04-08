#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints addition of argument value
 * @argc: firts input
 * @argv: second input
 * Return: Always (Success)
 */

int main(int argc, char *argv[])
{
	int i, counter = 0, add = 0;
	char *next;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			add += strtol(argv[i], &next, 10);
			if ((next == argv[i]) || (*next != '\0'))
			{
				counter++;
			}
		}
		if (counter == 0)
		{
			printf("%d\n", add);
		}
		else
		{
			printf("%s\n", "Error");
		}
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
