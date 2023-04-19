/**
 * int_index - Check the element match & Print the index of an arrray
 * @array: first parameter
 * @size: second parm
 * @cmp: function as parameter
 * Return: Always (Sucess).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
			return (i);
		}
	}
	return (i);
}
