#include <stdio.h>
#include <math.h>

/**
 * main - Prints maximum factorial
 * Return: Always (Success)
 */

int main(void)
{
	long n, mxfact, num;
	double square;

	num = 612852475143;
	square = sqrt(num);

	for (n = 1; n <= square; n++)
	{
		if (num % n == 0)
		{
			mxfact = num / n;
		}
	}
	printf("%ld\n", mxfact);
	return (0);
}
