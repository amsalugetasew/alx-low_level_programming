#include<stdio.h>

/**
 * reverse_array - Prints reverses the content of an array of integers
 * @a: first integer  parameter
 * @n: second integer parameter
 * Return: Always (Success)
 */

void reverse_array(int *a, int n)
{
	int i = n;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d",*(a+i));
	}
	printf("\n");
}
