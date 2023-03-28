#include <stdio.h>
#include <time.h>

/**
 * main - Prints base 16 digits lowercases
 * Return: Always (Success)
 *
 */

int main(void)
{
	int n = 0;
	/* your code goes there */
	while (n <= 15)
	{
		if ((n + 87) > 96)
		{
			putchar(n + 87);
		}
		else
		{
			putchar(n + '0');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
