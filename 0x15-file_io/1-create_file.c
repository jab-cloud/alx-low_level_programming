#include "main.h"

/**
 * create_file - that creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int j;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	j = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (j == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(j, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(j);

	return (1);
}
