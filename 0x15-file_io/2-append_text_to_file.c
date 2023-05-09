#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: file name.
 * @text_content: The text to write.
 *
 * Return: success or failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int of, wf, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	of = open(filename, O_WRONLY | O_APPEND);
	wf = write(of, text_content, len);

	if (of == -1 || wf == -1)
		return (-1);

	close(of);

	return (1);
}
