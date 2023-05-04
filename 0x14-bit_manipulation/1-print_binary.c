#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary -  prints the binary representation of a number
 * @n: integer input
 *
 * Return: Binary number
 */
void print_binary(unsigned long int n)
{
	int binaryNum[32];
	int i = 0, j;

	if (n == 0)
	{
		printf("%d", 0);
	}
	while (n > 0)

	{
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%d", binaryNum[j]);
}
