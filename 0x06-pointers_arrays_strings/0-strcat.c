#include<string.h>
/**
 * *_strcat - Prints the concatinated value of two strings
 * @dest: first character string parameter
 * @src: second character string parameter
 * Return: Always (Success)
 */
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);

	return (dest);
}
