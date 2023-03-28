#include <stdio.h>

/**
 * print_alphabet_x10 - Prints alphabet ten times 10x
 * Return: Always (Success)
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
	}
/*	putchar('\n');*/
}
