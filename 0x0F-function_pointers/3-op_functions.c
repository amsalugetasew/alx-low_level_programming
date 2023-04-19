#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Return the addition of two numbers
 * @a: first parameter
 * @b: second parm
 * Return: Always (Sucess).
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Return the substraction of two numbers
 * @a: first parameter
 * @b: second parm
 * Return: Always (Sucess).
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Return the multiplicaton of two numbers
 * @a: first parameter
 * @b: second parm
 * Return: Always (Sucess).
 */
int op_mul(int a, int b)
{       
        return (a * b);
} 
/**
 * op_div - Return the division of two numbers
 * @a: first parameter
 * @b: second parm
 * Return: Always (Sucess).
 */
int op_div(int a, int b)
{
	if (b == 0)
        {
                printf("Error\n");
                exit(98);
        }
        return (a / b);
}
/**
 * op_mod - Return the modultion of two numbers
 * @a: first parameter
 * @b: second parm
 * Return: Always (Sucess).
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
        return (a % b);
}
