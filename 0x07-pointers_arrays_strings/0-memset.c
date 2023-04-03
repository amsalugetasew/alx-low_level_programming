#include<string.h>

/**
 * *_memset - Prints a pointer of memory area
 * @s: first charcter string parameter
 * @b: second character string parameter
 * @n: third unsigned integer parameter
 * Return: Always (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	s = memset(s, b, n);

	return (s);
}
