#include "main.h"

/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 * @s: String
 * @accept: the set of bytes to be searched
 * Return: a pointer to the byte that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
