#include <stdio.h>

/**
 * main - check the code
 * @void: void parameter
 * Return: Always (Success).
 */

int main(void)
{
	int x = 0;
	long y = 1, z = 2, res = z;

	while ((z + y) < 4000000)
	{
		z += y;
		if (z % 2 == 0)
		{
			res += z;
		}
		y = z - y;
		++x;
	}
	printf("%ld\n", res);
	return (0);
}
