#include <stdio.h>
/**
*main-prints the alphabet at reverse
*
*Return:Always 0 (Succesful)
*/
int main(void)
{
char i;
for (i = 'z'; i >= 'a' ; --i)
{
putchar(i);
}
putchar('\n');
return (0);
}
