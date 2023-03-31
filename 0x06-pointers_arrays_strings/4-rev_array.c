#include<stdio.h>
/**
 * reverse_array - Prints reverses the content of an array of integers
 * @a: first integer  parameter
 * @n: second integer parameter
 * Return: Always (Success)
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
