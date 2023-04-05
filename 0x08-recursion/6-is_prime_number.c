#include "main.h"
/**
 * is_prime_number - Prints prime number recursion
 * @n: firts integer paramenter 
 * Return: Always (Success)
 */

int is_prime_number(int n)
{
	int i, inc = 0;
	if (n != 1 && n != -1)
	{
		for (i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				inc++;
			}
		}
		if (inc > 2)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
