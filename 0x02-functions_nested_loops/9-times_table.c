#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - Prints 9 times table
 * Return: Always (Success)
 *
 */

void times_table(void)
{
	int i, j, r, f;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) > 9)
			{
				r = (i * j) % 10;
				f = (i * j) / 10;
				putchar(f + '0');
				putchar(r + '0');
			}
			else
			{
				putchar((i * j) + '0');
			}
			if (j == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
			if (((i * j) <= 9) && ((j > 0) && (i <= 1)))
			{
				putchar(' ');
			}
			if (((i * j) <= 9) && (j <= 0))
			{
				putchar(' ');
			}
			else
			{
				continue;
			}
		}
		putchar('\n');
	}
}
