#include <string.h>
/**
 * *_strchr - Prints string after the scanned character
 * @s: first charcter string parameter
 * @c: second character string parameter
 * Return: Always (Success)
 */

char *_strchr(char *s, char c)
{
	s = strchr(s, c);

	return (s);
}
