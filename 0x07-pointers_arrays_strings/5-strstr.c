#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: The string to be searched
 * @needle: the substring to be located
 * Return: if the substring is located - the pointer to the beginning of
 *                                        the located substring
 *         if the substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == neeedle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == needle[index]);
		}
	haystack++;
	}
	return ('\0');
}
