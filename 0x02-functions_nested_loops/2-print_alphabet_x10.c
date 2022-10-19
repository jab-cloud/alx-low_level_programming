#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
char c, i;
for (i = 0;  <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
