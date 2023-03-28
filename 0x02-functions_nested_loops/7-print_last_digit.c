#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - Prints last digit of a number
 * @n: - integer parameter
 * Return: Always (Success)
 *
 */

int print_last_digit(int n)
{
	int num;
	
	num = (abs(n) % 10);
	putchar(num + '0');
	return (num);
}
