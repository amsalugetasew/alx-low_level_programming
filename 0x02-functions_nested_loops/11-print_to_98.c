#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - Prints all numbers
 * @n: - first integer parameter
 * Return: Always (Success)
 *
 */
void print_to_98(int n)
{
	int i, r, ab;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 99)
			{
				putchar((i / 100) + '0');
				r = i % 100;
				putchar((r / 10) + '0');
				putchar((r % 10) + '0');
			}
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
			}
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				ab = abs(i);
				if (ab > 99)
				{
					putchar('-');
					putchar((ab / 100) + '0');
					r = ab % 100;
					putchar((r / 10) + '0');
					putchar((r % 10) + '0');
					putchar(',');
                                        putchar(' ');
				}
				else if ab > 9)
				{
					putchar('-');
					putchar((ab / 10) + '0');
					putchar((ab % 10) + '0');
					putchar(',');
                                        putchar(' ');
				}
				else
				{
					putchar('-');
					putchar(ab + '0');
					putchar(',');
                                        putchar(' ');
				}
			}
			else if ( i > 9)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
