#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - create file on my storage
 * @filename: file name
 * @text_content: the content of file
 * Return: Always success
 */
int create_file(const char *filename, char *text_content)
{
	int c = 0, file, a;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
		{
			c++;
		}
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(file, text_content, c);
	if (file == -1 || a == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
