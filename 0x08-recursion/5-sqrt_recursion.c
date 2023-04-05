#include "main.h"

/**
 * _sqrt_recursion - Prints square root of a number recursion
 * @n: firts integer paramenter
 * Return: Always (Success)
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
/**
 * square_root - Check square root of a number
 * @n: firts integer paramenter
 * @i: input two
 * Return: Always (Success)
 */
int square_root(int n, int i)
{
	int sq = i * i;

	if (sq > n)
	{
		return (-1);
	}
	if (sq == n)
	{
		return (i);
	}
	return (square_root(n, i + 1));
}
