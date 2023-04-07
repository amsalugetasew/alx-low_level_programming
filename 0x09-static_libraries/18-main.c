#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char str[] = "Look up!\n";
	char ptr;

	while (str[i])
	{
		ptr = str[i];
		printf("%c", _putchar(ptr));
		i++;
	}
	return (0);
}
