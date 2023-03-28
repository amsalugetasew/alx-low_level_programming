#include<stdio.h>
#include "main.h"

/**
 * more_numbers - Prints digits 14 times
 * @void: void parameter
 * Return: Always (Success)
 */

void more_numbers(void)
{
	int n, m;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
