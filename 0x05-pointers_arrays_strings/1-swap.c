#include "main.h"

/**
 * swap_int - Prints swapped two integers
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: Always (Success)
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
