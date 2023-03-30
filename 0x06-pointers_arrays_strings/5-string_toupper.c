#include<string.h>

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @str: character string parameter
 * Return: Always (Success)
 */

char *string_toupper(char * str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (*(str + i) < 97)
		{
			*(str + i) -= 0;
		}
		else
		{
			*(str + i) -= 32;
		}
	}
	return (str);
}

