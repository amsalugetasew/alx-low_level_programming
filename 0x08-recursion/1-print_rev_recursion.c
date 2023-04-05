#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Prints revers string using recursion
 * @s: - first character parameter
 * Return: Always (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
