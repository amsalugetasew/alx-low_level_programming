#include <stdio.h>
#include <time.h>

/**
 * main - Prints lower and uper case letters
 * Return: Always (Success)
 *
 */

int main(void)
{
	char c = 'A', s = 'a';
	/* your code goes there */
	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
