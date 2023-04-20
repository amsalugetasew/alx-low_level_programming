#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc: first parm
 * @argv: second parm
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
