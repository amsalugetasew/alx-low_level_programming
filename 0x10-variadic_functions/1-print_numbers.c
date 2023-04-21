#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Print numbers, followed by a new line
 * @separator: first input
 * @n: second input
 * @...: Unknown arguments
 * Return: Always (Sucess).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_arg;
	va_start(list_arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_arg, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list_arg);
}
