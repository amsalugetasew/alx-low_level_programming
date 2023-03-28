#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * main - Prints _Putchar using function
 * Return: Always (Success)
 *
 */

int main(void)
{
	int i;
	char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int len = strlen(ch);

	for (i = 0; i < len; i++)
	{
		_putchar (ch[i]);
	}
	putchar('\n');
	return (0);
}

