#include <stdio.h>
#include <time.h>


/**
 * main - Print numbers in base 10
 * Return: Always (Success)
 *
 */

int main(void)
{
	int d = 0;
	/* your code goes there */
	while (d <= 9)
	{
		putchar('0' + d);
		d++;
	}
	putchar('\n');
	return (0);
}
