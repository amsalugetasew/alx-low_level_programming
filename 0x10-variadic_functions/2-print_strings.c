#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - Print strings, followed by a new line
 * @separator: first input
 * @n: second input
 * 
 * Return: Always (Sucess).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list_arg;
	va_start(list_arg, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("(nil)");
		}
		else if (i == n - 1)
		{
			printf("%s", va_arg(list_arg, char *));
		}
		else
		{
			printf("%s, ", va_arg(list_arg, char *));
		}
	}
	printf("\n");
}
