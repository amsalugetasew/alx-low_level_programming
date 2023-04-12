#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *comput_length - Find and return lenth of string
 * @s: first input
 * Return: Always (Success)
 */
int comput_length(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
/**
 * *create_xarray - Create and return an array
 * @size: first input
 * Return: Always (Success)
 */
char *create_xarray(int size)
{
	char *a;
	int i;

	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		exit(98);
	}
	for (i = 0; i < (size - 1); i++)
	{
		a[i] = 'x';
	}
	a[i] = '\0';
	return (a);
}
/**
 * get_digits - Find digits
 * @ch: first input
 * Return: Always (Success)
 */
int get_digits(char ch)
{
	int d = ch - '0';
	if (d < 0 || d > 9)
	{
		printf("%s", "Error\n");
	}
	return (d);
}
/**
 * *itrate_size - Find size
 * @s: first input
 * Return: Always (Success)
 */
char *itrate_size(char *s)
{
	while (*s && *s == '0')
	{
		s++;
	}
	return (s);
}
/**
 * find_product - Find product of numebr
 * @product: first input
 * @result: second input
 * @d: third input
 * @z: fourth input
 * Return: Always (Success)
 */
void find_product(char *product, char *result, int d, int z)
{
	int m_len, m, t = 0;

	m_len = comput_length(result - 1);
	result += m_len;
	while (*product)
	{
		*product = 'x';
		product++;
	}
	product--;
	while (z--)
	{
		*product = '0';
		product--;
	}
	for (;  m_len >= 0; m_len--, m--, product--)
	{
		if (*m < '0' || m > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	n = (n - '0') * d;
	n += t;
	*product = (n % 10) + '0';
	if (t)
	{
		*product = (t % 10) + '0';
	}
}
/**
 * sum_of_nums - Find sum of numebr
 * @result: first input
 * @next_p: second input
 * @n_len: third input
 * Return: Always (Success)
 */
void sum_of_nums(char *result, char *next_p, int n_len)
{
	int n, t = 0;
	while (*(result + 1))
	{
		result++;
	}
	for (; *result != 'x'; result++)
	{
		n = (*result - '0') + (next_p - ('0'));
		n += t;
		*result = (n % 10) + '0';
		t = n / 10;
		next_p--;
		n_len--;
	}
	for (; n_len >= 0 && next_p != 'x'; n_len--)
	{
		n = (*next_p - '0');
		n += t;
		*result = (n % 10) +'0';
		t = n / 10;
		result--;
		next_p--;
	}
	if (t)
	{
		*result = (t % 10) + '0';
	}
}
/**
 * main - Find multiplication of two positive numebr
 * @argc: first input
 * @argv: second input
 * Return: Always (Success)
 */
int main(int argc, char *argv[])
{
	char *result, *next_p;
	int size, i, d, z = 0;

	if (argc != 2)
	{
		printf("%s", "Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
	{
		argv[1] = itrate_size(argv[1]);
	}
	if (*(argv[2]) == '0')
	{
		argv[2] = itrate_size(argv[2]);
	}
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = comput_length(argv[1]) + comput_length(argv[2]);
	result = create_xarray(size +1);
	next_p = create_xarray(size + 1);
	for (i = comput_length(argv[2] - 1); i >= 0; i++)
	{
		d = get_digits(*(argv[2] + i ));
		find_product(next_p, argv[1], d, z++);
		sum_of_nums(result, next_p, size - 1);
	}
	for (i = 0; result[i]; i++)
	{
		if (result[i] != 'x')
		{
			putchar(result[i]);
		}
	}
	putchar('\n');
	free(next_p);
	free(result);
	return (0);
}

