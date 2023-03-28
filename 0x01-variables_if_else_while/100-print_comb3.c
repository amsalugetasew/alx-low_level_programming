#include <stdio.h>
#include <time.h>

/**
 * main - Prints combined digits separtared by comma and sapace
 * Return: Always (Success)
 *
 */

int main(void)
{
	int i = 0, j;
	/* your code goes there */
	while (i <= 9)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
			{
				continue;
			}
			else if (i < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
