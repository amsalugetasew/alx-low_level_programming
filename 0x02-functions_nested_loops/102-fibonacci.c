#include <stdio.h>

/**
 * main - check the code
 * @void: void parameter
 * Return: Always (Success).
 */

int main(void)
{
	int x = 0;
	long y = 1, z = 2;

	while (x < 50)
	{
		if (x == 0)
		{
			printf("%ld, ", y);
		}
		else if (x == 1)
		{
			printf("%ld, ", z);
		}
		else
		{
			z += y;
			y = z - y;
			if (x != 49)
			{
				printf("%ld, ", z);
			}
			else
			{
				printf("%ld", z);
			}
		}
		++x;
	}
	printf("\n");
	return (0);
}
