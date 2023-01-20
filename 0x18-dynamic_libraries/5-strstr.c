#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: The string to be searched
 * @needle: the substring to be located
 *
 * Return: the char value
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b = 0;

	while (haystack[b])
	{
		while (needle[a])
		{
			if (haystack[a + b] != needle[a])
			{
				break;
			}

			b++;
		}
		if (needle[a] == '\0')
		{
			return (haystack + b);
		}

				b++;

	}
	return ('\0');
}
