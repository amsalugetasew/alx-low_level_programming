#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
char *my_buffer(char *file);
void closing_my_file(int f);
/**
 * *my_buffer - create buffer
 * @file: file
 * Return: Always success
 */
char *my_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (b);
}
/**
 * closing_my_file - to close a file
 * @f: input one
 * Return: always success
 */
void closing_my_file(int f)
{
	int i;

	i = close(f);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n", f);
		exit(100);
	}
}
/**
 * main - main function
 * @argc: first argument
 * @argv: second argument
 * Return: always succes
 */
int main(int argc, char *argv[])
{
	int f, t, a, b;
	char *bf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bf = my_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	a = read(f, bf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]);
			free(bf);
			exit(98);
		}
		b = write(t, bf, a);
		if (t == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to%s\n", argv[2]);
			free(bf);
			exit(99);
		}
		a = read(f, bf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (a > 0);
	free(bf);
	closing_my_file(f);
	closing_my_file(t);
	return (0);
}
