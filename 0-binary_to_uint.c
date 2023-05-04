#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: constant character array input
 *
 * Return: An integer number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_num = 0, base = 1, rem, num;
	int i, terminator = 0;

	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 57)
		{
			terminator++;
		}
	}
	num = atoi(b);
	while (num > 0)
	{
		rem = num % 10;
		decimal_num = decimal_num + rem * base;
		num = num / 10;
		base = base * 2;
	}
	if (terminator >= 1)
	{
		decimal_num = 0;
	}
	else
	{
		decimal_num = decimal_num;
	}
	return (decimal_num);
}
