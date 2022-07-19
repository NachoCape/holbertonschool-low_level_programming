#include "main.h"

/**
 * create_file - creates a file
 * @filename: is the name of the file to create and text_content
 * is a NULL terminated string to write to the file
 * @text_content: string that we will use to write in the file
 *
 * Description: The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content && text_content[i] != '\0')
		i++;
	if (write(fd, text_content, i) == -1)
		return (-1);
	close(fd);
	return (1);
}
