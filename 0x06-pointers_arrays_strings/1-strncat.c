#include<string.h>
/**
 * *_strncat - Prints n number of concatinated values of string
 * @dest: first charcter string parameter
 * @src: second character string parameter
 * @n: third integer parameter
 * Return: Always (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
