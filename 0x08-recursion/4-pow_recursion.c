#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - Prints power of a number recursion
 * @x: firts integer paramenter
 * @y: - first integer parameter
 * Return: Always (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
