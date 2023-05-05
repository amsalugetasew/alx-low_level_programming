#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_binary -  prints the binary representation of a number
 * @n: integer input
 *
 * Return: Binary number
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int state;

	for (i = 63; i >= 0; i--)
	{
		state = n >> i;
		if (state & 1)
		{
			putchar('1');
			c++;
		}
		else if (c)
		{
			putchar('0');
		}
	}
	if (!c)
	{
		putchar('0');
	}
}
