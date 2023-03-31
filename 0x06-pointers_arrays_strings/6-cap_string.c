#include<string.h>
/**
 * *cap_string -  capitalizes all words of a string
 * @str: charcter string parameter
 * Return: Always (Success)
 */
char *cap_string(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (((*(str + i) == 32) || (*(str + i) == 10) || (*(str + i) == 9) || (*(str + i) == 46)))
		{
			if (*(str + i + 1) > 96)
			{
				*(str + i + 1) -= 32;
			}
		}
		else
		{
			*(str + i) -= 0;
		}
	}
	return (str);
}
