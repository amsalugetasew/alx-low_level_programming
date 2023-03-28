#include <stdio.h>
#include <time.h>

/**
 * main - Prints combined three digits separtared by comma and sapace
 * Return: Always (Success)
 *
 */

int main(void)
{
	int i = 0, j, k;
	/* your code goes there */
	while (i <= 9)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i == 7 && j == 8 && k == 9)
				{
					continue;
				}
				else if (i < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
