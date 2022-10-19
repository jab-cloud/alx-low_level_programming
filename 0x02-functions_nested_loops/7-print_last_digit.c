#include "main.h"

/**
* print_last_digit - prints the last digit of a num
* @a: the last digit
* Return: the last digit
*/
int print_last_digit(int a)
{
int x;

if (a < 0)
a = -a;
x = a % 10
_putchar(x + '0');
return (x);
}
