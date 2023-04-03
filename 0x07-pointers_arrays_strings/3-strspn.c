#include <string.h>

/**
 * _strspn - Prints a copies of memory area
 * @s: first charcter string parameter
 * @accept: second character string parameter
 * Return: Always (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	len = strspn(s, accept);

	return (len);
}
