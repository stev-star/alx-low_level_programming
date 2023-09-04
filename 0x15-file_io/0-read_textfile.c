#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opening, reading, writing;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	opening = open(filename, O_RDONLY);
	reading = read(opening, buffer, letters);
	writing = write(STDOUT_FILENO, buffer, reading);

	if (opening == -1 || reading == -1 || writing == -1 || writing != reading)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opening);

	return (writing);
}
