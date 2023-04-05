#include "main.h"
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: firts input
 * Return: Always (Success)
 */
int is_palindrome(char *s)
{
	if (*s == '\n')
	{
		return (1);
	}
	return (comparision(s, 0, comp_len_os_string(s) - 1));
}
/**
 * comparision - Check if a string is a palindrome
 * @s: firts input
 * @num1: second input
 * @num2: input three
 * Return: Always (Success)
 */
int comparision(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num2 == num1 + 1)
		{
			return (1);
		}
		return (0 + comparision(s, num1 + 1, num2 -1));
	}
	return (0);
}
/**
 * comp_len_os_string - Compute lengeth of string
 * @s: firts input
 * Return: Always (Success)
 */
int comp_len_os_string(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + comp_len_os_string(s + 1));
	}
}
