#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * close_file - function that close files.
 * @op_file: file opened
 * Return: none
 */
void close_file(int op_file)
{
	if (close(op_file) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_file);
		exit(100);
	}
}
/**
 * main - program that copies the content of a file to another file.
 * @argc: arguments count
 * @argv: arguments value
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *txt;
	int text_in, text_out, rf, wf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	txt = malloc(1024);
	if (txt == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	text_in = open(argv[1], O_RDONLY);
	text_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rf = read(text_in, txt, 1024);
	do {
		if (text_in < 0 || rf < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(txt);
			exit(98);
		}
		wf = write(text_out, txt, rf);
		if (text_out < 0 || wf < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(txt);
			exit(99);
		}
		rf = read(text_in, txt, 1024);
		text_out = open(argv[2], O_WRONLY | O_APPEND);
	} while (rf > 0);
	free(txt);
	close_file(text_in);
	close_file(text_out);
	return (0);
}
