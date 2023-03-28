#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints digits separtared by comma and sapace
 * Return: Always (Success)
 *
 */

int main(void)
{
	int n;
	/* your code goes there */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d %s", n, "is positive\n");
	}
	else if (n == 0)
	{
		printf("%d %s", n, "is zero\n");
	}
	else
	{
		printf("%d %s", n, "is negative\n");
	}
	return (0);

}
