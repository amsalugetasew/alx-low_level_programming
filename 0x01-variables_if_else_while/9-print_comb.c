#include <stdio.h>
#include <time.h>

/**
 * main - Prints digits separtared by comma and sapace
 * Return: Always (Success)
 *
 */

int main(void)
{
	int n = 0;
	/* your code goes there */
	while (n <= 9)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
