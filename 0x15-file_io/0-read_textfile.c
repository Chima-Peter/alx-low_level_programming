#include "main.h"

/**
 * read_textfile - The function
 *
 * @filename: Name of text file
 * @letters: Actual number of letters it should read and print
 *
 * @Description: A function that reads a text file and prints to POSIX stdout
 * @Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *words;
	long len, sz;

	words = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDWR, O_CREAT);

	if (fp == -1)
		return (0);

	sz = read(fp, words, letters);

	if (sz == -1)
		return (0);

	len = write(STDOUT_FILENO, words, letters);

	if (len == -1)
		return (0);
	free(words);

	close(fp);

	return (sz);
}
