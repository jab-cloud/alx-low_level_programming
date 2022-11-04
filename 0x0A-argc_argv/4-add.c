#include "stdio.h"
#include "stdlib.h"

/**
 * main - function prints its name
 * @argc: argc parameter
 * @argv: an array of command
 * Return: 0 for succes
 */
int main(int argc, char *argv[])
{
	int result = 0, num, i;

	if (argc == 1)
		printf("0\n");

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s\n", "Error");
			return (1);
		}
	}

	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
