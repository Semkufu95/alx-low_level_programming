#include "main.h"

/**
  * create_file -function to create file
  * @text_content: contents of the file created
  * @filename: name of file to be created
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int k;
	int fide;
	int length;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fide = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(fide, text_content, length);
	if (fide == -1 || k == -1)
		return (-1);
	close(fide);
	return (1);
}
