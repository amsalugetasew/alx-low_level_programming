#include "main.h"
/**
 * is_prime_number - Prints prime number recursion
 * @n: firts integer paramenter 
 * Return: Always (Success)
 */

int is_prime_number(int n)
{
	return (prime_check(n, 1));
}
/**
 * prime_check - check a number is prime
 * @n: firts integer paramenter
 * @i: input two
 * Return: Always (Success)
 */
int prime_check(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (prime_check(n, i + 1));
}
