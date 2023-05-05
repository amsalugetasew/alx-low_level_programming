#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness -  checks the endianness
 *
 * Return: Set o bit
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ch = (char *) &i;

	return (*ch);
}
