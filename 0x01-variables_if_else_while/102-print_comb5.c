#include <stdio.h>
/**
*main - prints combination of two-two
*
*Return: Always 0 (Succesful)
*/
int main(void)
{
int x, y;
for (x = 0; x < 100; x++)
{
for (y = 0; y < 100; y++)
{
if (y > x)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
putchar(' ');
putchar((y / 10) + '0');
putchar((y % 10) + '0');
if (x != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
