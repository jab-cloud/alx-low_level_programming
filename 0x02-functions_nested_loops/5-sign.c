#include "main.h"

/**
* print_sign - check the code sign num
* @n:  the number to be checked
* Return: Always 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('-');
return ('/');
}
}
