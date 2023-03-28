#include <stdio.h>
#include <stdlib.h>

/**
 * fibonacci - Prints fibonacci of number
 * @n: - first integer parameter
 * Return: Always (Success)
 */

int fibonacci(int n)
{
	if (n <= 1)
	{
		return (n);
	}
	else 
	{
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}
