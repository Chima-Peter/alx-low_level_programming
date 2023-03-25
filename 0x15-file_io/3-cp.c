#include "main.h"

/**
 * main- The main function
 *
 * @argc: Argument count
 * @argv: Argument variable
 *
 * @Description: A program that copies the content of a file to another file.
 * @Return: Always 0
 */

int main(int argc, char *argv[])
{
	int from, to, rval, count;
	char *buf;
	int org, copy, end1, end2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	rval = access(argv[1], F_OK);

	if (from == -1 || rval == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	buf = malloc(1024 * sizeof(argv[1]));

	count = 1024 * sizeof(argv[1]);

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	org = read(from, buf, count);

	if (org == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	copy = write(to, buf, org);

	if (copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	end1 = close(from);
	end2 = close(to);

	if (end1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", end1);
		exit(100);
	}
	if (end2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", end2);
		exit(100);
	}

	return (0);
}
