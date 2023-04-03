#include<stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonas with squer array
 * @a: - first integer parameter
 * @size: second integre parameter
 * Return: Always (Success)
 */


void print_diagsums(int *a, int size)
{
	int i, j, diagonal[2], num, num1;
	num = 0;
	num1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				num += *(a + i * size + j);
			}
			if (i == (size - 1) - j)
			{
				num1 += *(a + i * size + j);
			}
		}
	}
	diagonal[0] = num;
        diagonal[1] = num1;

	for ( i = 0; i <= 1; i++)
	{
		if ( i == 0)
		{
			printf("%d",(diagonal[i]));
			putchar(',');
			putchar(' ');
		}
		else
		{
			printf("%d",(diagonal[i]));
		}
	}
	printf("\n");
}
