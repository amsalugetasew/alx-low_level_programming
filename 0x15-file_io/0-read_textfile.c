#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: first input
 * @letters: second input
 * Return: Text file that are from local storage
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch1;
	ssize_t file, a, b;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	ch1 = malloc(sizeof(char) + letters);
	a = read(file, ch1, letters);
	b = write(STDOUT_FILENO, ch1, a);
	free(ch1);
	close(file);
	return (b);
}
