#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - Print strings, followed by a new line
 * @separator: first input
 * @n: second input
 * @...: Unkwon arguments
 * Return: Always (Sucess).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list list_arg;
	va_start(list_arg, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list_arg, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list_arg);
}
