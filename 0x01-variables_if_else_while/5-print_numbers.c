#include <stdio.h>
#include <time.h>

/**
 * main - Prints single digit in base 10
 * Return: Always (Success)
 *
 */

int main(void)
{
	int d = 0;
	/* your code goes there */
	while (d <= 9)
	{
		printf("%d", d);
		d++;
	}
	putchar('\n');
	return (0);
}
