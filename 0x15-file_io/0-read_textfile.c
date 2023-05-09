#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX to STDOUT.
 * @filename: text file name
 * @letters: number of letters
 * Return: read letters count.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *output;
	ssize_t of;
	ssize_t wf;
	ssize_t rf;

	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	output = malloc(sizeof(char) * letters);
	rf = read(of, output, letters);
	wf = write(STDOUT_FILENO, output, rf);

	free(output);
	close(of);
	return (wf);
}
