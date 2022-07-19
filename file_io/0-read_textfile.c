#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file
 * @letters:is the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, rid = 0, res = 0;
	char *buf = NULL;

	fd = open(filename, O_RDONLY);
	if (!filename || fd == -1)
		return (0);
	buf = malloc(letters);
	rid = read(fd, buf, letters);
	if (rid == -1)
	{
		free(buf);
		return (0);
	}
	res = write(STDOUT_FILENO, buf, rid);
	if (res == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (res);
}
