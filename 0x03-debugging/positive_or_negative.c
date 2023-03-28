#include <stdio.h>

/**
 * * positive_or_negative - tests function that prints if integer is positive or negative
 * * Return: void
*/

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d %s", i, "is Negative\n");
	}
	else if (i == 0)
	{
		printf("%d %s", i, "is zero\n");
	}
	else
	{
		printf("%d %s", i, "is positive\n");
	}
}
