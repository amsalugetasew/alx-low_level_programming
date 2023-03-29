#include<string.h>

/**
 * *_strncpy - Prints n copy string
 * @dest: first charcter string parameter
 * @src: second character string parameter
 * @n: third integer parameter
 * Return: Always (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
