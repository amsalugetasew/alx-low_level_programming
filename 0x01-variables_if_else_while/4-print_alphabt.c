#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet lower uper case letters
 * Return: Always (Success)
 *
 */

int main(void)
{
	char c = 'a';
	/* your code goes there */
	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
