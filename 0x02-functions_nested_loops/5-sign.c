#include <stdio.h>

/**
 * print_sign - Prints 1 and + if the input is 0 otherwise 0
 * @n: - integer parameter
 * Return: Always (Success)
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
