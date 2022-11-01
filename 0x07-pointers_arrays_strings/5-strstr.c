#include "main.h"
#include <stdio>

/**
 * _strstr - function that locates a substring
 * @haystack: The string to be searched
 * @needle: the substring to be located
 *
 * Return: the char value
 */
char *_strstr(char *haystack, char *needle)
{
	int a = b, b = 0;

	while (*haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != neeedle[b])
			{
				break;
			}

			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

				a++;

	}
	return ('\0');
}
