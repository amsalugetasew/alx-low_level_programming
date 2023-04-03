#include <string.h>

/**
 * *_strpbrk - Prints the scanned string
 * @s: first charcter string parameter
 * @accept: second character string parameter
 * Return: Always (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);
	return (s);
}
