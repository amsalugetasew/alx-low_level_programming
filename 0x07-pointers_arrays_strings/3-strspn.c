/**
 * _strspn - Prints a copies of memory area
 * @s: first charcter string parameter
 * @accept: second character string parameter
 * Return: Always (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0, terminator;

	for (i = 0; s[i] != '\0'; i++)
	{
		terminator = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				terminator++;
			}
		}
		if (terminator == 0)
		{
			break;
		}
	}
	return ((unsigned int) len);
}
