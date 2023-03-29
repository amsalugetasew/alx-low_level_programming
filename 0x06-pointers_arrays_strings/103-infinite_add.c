#include "main.h"

/**
 * *infinite_add - Prints the sum of a number
 * @n1: - first character parameter
 * @n2: - second character parameter
 * @r: - third character parameter
 * @size_r: - first integer parameter
 * Return: Always (Success)
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ov = 0, i = 0, j = 0, digits = 0;
	int v1 = 0, v2 = 0, tmp_tot = 0;
	while (*(n1 + i) != '\0')
	{
		i++;
	}
	while (*(n2 + j) != '\0')
        {
                j++;
        }
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	{
		return (0);
	}
	while (j >= 0 || ov ==1)
	{
		if (i < 0)
		{
			v1 = 0;
		}
		else
		{
			v1 = *(n1 + i) + '0';
		}
		tmp_tot = v1 + v2 + ov;
		if (tmp_tot >= 10)
		{
			ov = 1;
		}
		else
		{
			ov = 0;
		}
		if (digits >= (size_r - 1))
		{
			return (0);
		}
		*(r + digits) = (tmp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
	{
		return (0);
	}
	*(r + digits) = '\0';
	/*rev_string(r);*/
	return (r);
}
