#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints last digit random number
 * Return: Always (Success)
 *
 */

int main(void)
{
	int n, ld;
	char s[] = "and is less than 6 and not 0\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d %s %d %s", n, "is", ld, "and is greater than 5\n");
	}
	else if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d %s %d %s", n, "is", ld, s);
	}
	else
	{
		printf("Last digit of %d %s %d %s", n, "is", ld, "and is 0\n");
	}
	return (0);
}

