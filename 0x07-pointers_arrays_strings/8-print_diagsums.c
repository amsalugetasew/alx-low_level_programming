#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonas with squer array
 * @a: - first integer parameter
 * @size: second integre parameter
 * Return: Always (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		s1 += a[i];
	}
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		s2 += a[j];
	}
	printf("%d, %d\n", s1, s2);
}
