#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - function that read and print file to the POSIX std output
  * @filename: name of file
  * @letters: number of letters to be printed
  * Return: 0 if filename is NULL, else actual number of letters print and read
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *faili;
	ssize_t fide;
	ssize_t no_bytes_t;
	ssize_t no_bytes_w;

	fide = open(filename, O_RDONLY);
	if (fide == -1)
	{
		return (0);
	}
	faili = malloc(sizeof(char) * letters);
	no_bytes_t = read(fide, faili, letters);
	no_bytes_w = write(STDOUT_FILENO, faili, no_bytes_t);

	free(faili);
	close(fide);
	return (no_bytes_w);
}
