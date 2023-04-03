#include <string.h>

/**
 * _strspn - Prints a copies of memory area
 * @s: first charcter string parameter
 * @accept: second character string parameter
 * Return: Always (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num_of_match;
	num_of_match = strspn(s, accept);

	return (num_of_match);
}
