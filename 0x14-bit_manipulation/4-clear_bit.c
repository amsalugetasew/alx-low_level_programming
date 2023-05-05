#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: integer input
 * @index: second input
 * Return: Set o bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
