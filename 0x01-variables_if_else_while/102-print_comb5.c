#include <stdio.h>
#include <time.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * Return: Always (Success)
 *
 */

int main(void)
{
	int i = 0, j;
	/* your code goes there */
	while (i <= 98)
	{
		/*j = i + 1;*/
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		/*	j++;*/
		}
		i++;
	}
	putchar('\n');
	return (0);
}

