#include "main.h"
void _puts_recursion(char *s)
{
if (*s)
{
_puts_recursion(s-1);
_putchar(s);
}
}
