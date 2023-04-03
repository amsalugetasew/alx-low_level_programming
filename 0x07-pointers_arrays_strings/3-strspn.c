#include <string.h>

/**
 * _strspn - Prints a copies of memory area
 * @s: first charcter string parameter
 * @accept: second character string parameter
 * Return: Always (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned i, j, len = 0, inc;

	for (i = 0; s[i] != '\0'; i++)
	{
		inc = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				inc++;
			}
		}
		if (inc == 0)
		{
			break;
		}
	}
	return (len);
}
