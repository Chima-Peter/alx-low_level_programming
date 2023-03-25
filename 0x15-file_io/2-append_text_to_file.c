#include "main.h"

/**
 * append_text_to_file - The main function
 *
 * @filename: The text file
 * @text_content: The string to append
 *
 * @Description: A function that appends text at the end of a file.
 * @Return: Either 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, rval;

	i = 0;

	rval = access(filename, R_OK);

	if (filename == NULL || rval == -1)
		return (-1);

	fp = open(filename, O_RDWR | O_APPEND);

	if (text_content == NULL)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	write(fp, text_content, i);

	close(fp);

	return (1);
}
