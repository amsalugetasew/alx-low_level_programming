#include<stdio.h>

/**
 * print_buffer - Prints buffer 
 * @b: Character parameter 
 * @size: - integer parameter
 * Return: Always (Success)
 *
 */

void print_buffer(char *b, int size)
{
	int i, j, k, d;
	i = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		j = size - i < 10 ? size - i : 10;
		printf("%08x: ", i);
		for ( k = 0; k < 10; k++)
		{
			if (k < j)
			{
				printf("%02x", *(b + i +k));
			}
			else
			{
				printf(" ");
			}
			if (k % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < j; k++)
		{
			d = *(b + i + k);
			if (d < 32 || d > 132)
			{
				d = '.';
				printf("%c", d);
			}
			printf("\n");
			i += 10;
		}
	}
}

