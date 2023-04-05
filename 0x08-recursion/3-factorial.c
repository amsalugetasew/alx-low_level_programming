#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Prints revers string using recursion
 * @s: - first character parameter
 * Return: Always (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
