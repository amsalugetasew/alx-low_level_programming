#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - Print Everything, followed by a new line
 * @: first input
 * @format: second input
 * @...: unkwon parameter
 * Return: Always (Sucess).
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s, *separator = "";

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
					{
						s = "(nil)";
					}
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
