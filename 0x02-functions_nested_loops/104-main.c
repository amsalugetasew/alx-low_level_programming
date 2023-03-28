#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i, val = 98,d, r, res = 0;

    for (i = 0; i <= val; i++)
    {
	    res = fibonacci(i);
    }
    if (res > 99)
    {
	    d = res / 100;
	    r = res % 100;
	    putchar(r + '0');
	    putchar((d / 10) + '0');
	    putchar((d % 10) + '0');
    }
    else if (res > 9)
    {
	    putchar((res / 10) + '0');
            putchar((res % 10) + '0');
    }
    else
    {
	    putchar((res) + '0');
    }
    putchar('\n');
    return (0);
}
