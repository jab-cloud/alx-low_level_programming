#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a :array of pieces
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0; c < 8; c++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');

	}
}
