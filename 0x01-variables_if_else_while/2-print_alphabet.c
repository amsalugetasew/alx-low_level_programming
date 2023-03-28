#include <stdio.h>

/**
 * main - Prints digits separtared by comma and sapace
 * Return: Always (Success)
 *
 */

int main(void)
{
	char c = 'a';
	/* your code goes there */
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
