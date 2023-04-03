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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s = &b;
		s = memset(s + 13, '.', 8*sizeof(char));
	}
	return (s);
}
