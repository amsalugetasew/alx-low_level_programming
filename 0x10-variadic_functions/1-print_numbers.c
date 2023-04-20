#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Print numbers, followed by a new line
 * @separator: first input
 * @n: second input
 * 
 * Return: Always (Sucess).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list_arg;
	va_start(list_arg, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			continue;
		}
		else if (i == n - 1)
		{
			printf("%d", va_arg(list_arg, int));
		}
		else
		{
			printf("%d, ", va_arg(list_arg, int));
		}
	}
	printf("\n");
}
