#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char values[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int c;

	for (c = 0; c < 59; c++)
	{
		if (values[c] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(values[c]);
		}
	}
	return (1);
}
