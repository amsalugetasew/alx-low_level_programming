#include <stdio.h>

/**
 * _isalpha - Prints 1 if the input is lowercase or uppercase otherwise 0
 * @c: - integer parameter
 * Return: Always (Success)
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
