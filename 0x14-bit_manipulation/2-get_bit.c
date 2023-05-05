#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer input
 * @index: second int input
 *
 * Return: Binary number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
