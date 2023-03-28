#include <stdlib.h>
/**
 * _atoi - Convert string to integer using pointer
 * @s: integer parameter
 * Return: Always (Success)
 */

int _atoi(char *s)
{
	int ch = 0;
	int ui = 0;
	int min = 1, i = 0;

	while (s[ch])
	{
		if (s[ch] == 45)
		{
			min *= -1;
		}
		while (s[ch] >= 48 && s[ch] <= 57)
		{
			i = 1;
			ui = (ui * 10) + (s[ch] - '0');
			ch++;
		}
		if (i == 1)
		{
			break;
		}
		ch++;
	}
	ui *= min;
	return (ui);
}
