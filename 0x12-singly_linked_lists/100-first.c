#include "lists.h"
#include <stdio.h>
/**
  * bmain - prints before main
  *
  * Return: void
  */
void  __attribute__((constructor)) bmain()
{
	printf("You\'re beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

