#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins
 * @argc: firts input
 * @argv: second input
 * Return: Always (Success)
 */
int main(int argc, char *argv[])
{
	int cnt, num_of_min_coins = 0;

	if (argc > 1)
	{
		cnt = atoi(argv[1]);

		while (cnt > 0)
		{
			num_of_min_coins++;
			if ((cnt - 25) >= 0)
			{
				cnt -= 25;
				continue;
			}
			if ((cnt - 10) >= 0)
			{
				cnt -= 10;
				continue;
			}
			if ((cnt - 5) >= 0)
			{
				cnt -= 5;
				continue;
			}
			if ((cnt - 2) >= 0)
			{
				cnt -= 2;
				continue;
			}
			if ((cnt - 1) >= 0)
			{
				cnt -= 1;
				continue;
			}
		}
		printf("%d\n", num_of_min_coins);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (0);
}
