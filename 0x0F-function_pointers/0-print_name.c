/**
 * print_name - Print name of person as it is and in uperletter
 * @name: first parameter
 * f: function as parameter
 * Return: Always (Sucess).
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
