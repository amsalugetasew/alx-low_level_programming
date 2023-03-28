#include<stdio.h>
#include "main.h"

/**
 * print_triangle - Prints triangles
 * @n: integer parameter
 * Return: Always (Success)
 */

void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n - i; j++)
			{
				_putchar(' ');
			}
			k = i;
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
				k--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
