#include<stdio.h>
#include "main.h"

/**
 * print_line - Prints straight line
 * @n: integere parameter
 * Return: Always (Success)
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
