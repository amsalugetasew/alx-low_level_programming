
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits -  returns the number of bits you would need to flip
 * @n: integer input
 * @m: second input
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int state;
	unsigned long int j = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		state = j >> i;
		if (state & 1)
		{
			c++;
		}
	}
	return (c);
}
