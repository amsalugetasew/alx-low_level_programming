#include <string.h>

/**
 * *_strstr - Prints the located substrings
 * @haystack: first charcter string parameter
 * @needle: second character string parameter
 * Return: Always (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	haystack = strstr(haystack, needle);

	return (haystack);
}
