#include <stdio.h>

/**
 * jack_bauer - Prints every minutes of the day
 * Return: Always (Success)
 *
 */

void jack_bauer(void)
{
	int w, x, y, z;

	for (w = 0; w <= 2; w++)
	{
		for  (x = 0; x <= 9; x++)
		{
			if ((w <= 1 && x <= 9) || (w <= 2 && x <= 3))
			{
				for (y = 0; y <= 5; y++)
				{
					for (z = 0; z <= 9; z++)
					{
						putchar(w + '0');
						putchar(x + '0');
						putchar(58);
						putchar(y + '0');
						putchar(z + '0');
						putchar('\n');
					}
				}
			}
		}
	}
}
