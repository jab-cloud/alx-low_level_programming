#include "main.h"
#include <stdio.h>

/**
* _abs - calculate the absolute value of the number from zero
* @a:the integer
* Return:absolute value of num
*/
int _abs(int a)
{
if (a < 0)
a = a * -1;
return (a);
}
