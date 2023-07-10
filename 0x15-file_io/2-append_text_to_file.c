#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1 for success, -1 for failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fide;
	int k;
	int length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		length++;
	}
	fide = open(filename, O_WRONLY | O_APPEND);
	k = write(fide, text_content, length);
	if (fide == -1 || k == -1)
		return (-1);
	close(fide);
	return (1);
}
