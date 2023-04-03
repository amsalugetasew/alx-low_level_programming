#include <stdio.h>
/**
 * set_string - Prints string using pointer to pointer
 * @s: - first character parameter
 * @to: - second character parameter
 * Return: Always (Success)
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
