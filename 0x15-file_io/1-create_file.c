#include "main.h"

/**
 * create_file - The main function
 *
 * @filename: The text file
 * @text_content: String to write to the file
 *
 * @Descriptions: Create a function that creates a file
 * @Return; Either 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, sz, i;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	i = 0;

	while (text_content[i] != '\0')
		i++;

	sz = write(fp, text_content, i);

	if (sz == -1)
		return (-1);

	close(fp);

	return (1);
}
