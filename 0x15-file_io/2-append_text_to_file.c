#include "main.h"

/**
 * append_text_to_file - Appends text to an existing file.
 * @filename: The name of the file to append text to.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1); /* If the filename is NULL, return -1. */

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1); /* If file opening or writing fails, return -1. */
    /* If the filename is NULL, return -1. */
	close(o);
    /* Return 1 to indicate success. */
	return (1);
}
