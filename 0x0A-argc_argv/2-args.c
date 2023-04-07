#include <stdio.h>

/**
 * main - Prints all argument value including its excutable file
 * @argc: firts input
 * @argv: second input
 * Return: Always (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
