#include <stdio.h>
#include <time.h>

/**
 * main - Prints lower alphabet reverse order
 * Return: Always (Success)
 *
 */

int main(void)
{
	char a = 'z';
	/* your code goes there */
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
