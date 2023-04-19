#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @aergc: first parm
 * @argv: second parm
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int byt, i;
	int (*address)(int,char **) = main;
	unsigned char oc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byt; i++)
	{
		oc = *(unsigned char *)address;
		printf("%.2x", oc);

		if (i == byt - 1)
		{
			continue;
		}
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
