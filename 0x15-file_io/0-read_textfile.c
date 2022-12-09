#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters to be read.
 *
 * Return: write numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int j;
	ssize_t i;
	ssize_t k;
	char *buf;

	if (!filename)
		return (0);
      j = open(filename, O_RDONLY);

	if (j == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	i = read(j, buf, letters);
	k = write(STDOUT_FILENO, buf, i);

	close(j);

	free(buf);

	return (k);
}
