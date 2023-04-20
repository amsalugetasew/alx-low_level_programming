#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - Compute and returns the sum of all its parameters
 * @n: first parameter
 * @...: Unknown arg
 * Return: Always (Sucess).
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;

	va_list arg_list;
	va_start(arg_list, n);

	if (n == 0)
	{
		return (0);
		exit(98);
	}
	for (i = 0; i < n; i++)
	{
		s += va_arg(arg_list, int);
	}
	va_end(arg_list);
	return (s);

}
