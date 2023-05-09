#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - Append text at the end of the txt
 * @filename: file name
 * @text_content: content
 * Return: Always success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, b, c = 0;

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
	file = open(filename, O_WRONLY | O_APPEND);
	b = write(file, text_content, c);
	if (file == -1 || b == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
