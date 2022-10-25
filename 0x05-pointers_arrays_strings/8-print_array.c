#include "main.h"
#include <stdio.h>

/**
 * print_array - elements of an array of integers
 * @a: array
 * @n: number of values
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
