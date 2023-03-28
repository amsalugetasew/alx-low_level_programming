#include<string.h>
#include<stdio.h>
/**
 * *_strcpy - Prints string conpy
 * @dest: destination character parameter
 * @src: source character parameter
 * Return: Always (Success)
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return ((char *)dest);
}
