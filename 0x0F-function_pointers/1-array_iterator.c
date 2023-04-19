/**
 * array_iterator - Print arrray element in decimal and hexa decimal
 * @array: first parameter
 * @size: second parm
 * @action: function as parameter
 * Return: Always (Sucess).
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
