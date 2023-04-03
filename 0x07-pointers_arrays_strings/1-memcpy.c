#include <string.h>

/**
 * *_memcpy - Prints a copies of memory area
 * @dest: first charcter string parameter
 * @src: second character string parameter
 * @n: third unsigned integer parameter
 * Return: Always (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
