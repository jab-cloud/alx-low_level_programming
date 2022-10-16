#include <stdio.h>
/**
*main-prints lowercase alphabates
*
*Return:Always 0 (Succesful)
*/
int main(void)
{
char c;
for (c = '0'; c <= '9' ; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
