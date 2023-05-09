#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file name.
 * @text_content: text to write to the file.
 *
 * Return: success or failure.
 */
int create_file(const char *filename, char *text_content)
{
	int of, wf, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wf = write(of, text_content, len);

	if (of == -1 || wf == -1)
		return (-1);

	close(of);

	return (1);
}
