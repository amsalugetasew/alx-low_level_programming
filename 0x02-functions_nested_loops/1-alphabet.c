#include <stdio.h>

/**
 * print_alphabet - Prints alphabet a to z
 * Return: Always (Success)
 *
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
