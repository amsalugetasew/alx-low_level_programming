#include <stdio.h>

/**
 * _islower - Prints 1 if the input is lowercase otherwise 1
 * @c: - integer parameter
 * Return: Always (Success)
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
