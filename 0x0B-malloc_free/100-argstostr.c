#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Prints value of arguments
 * @ac: firts input
 * @av: second input
 * Return: Always (Success)
 */
char *argstostr(int ac, char **av)
{
	int j = 0, i = 0, c = 0, k = 0;
	char *s;
	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			c++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * c) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
