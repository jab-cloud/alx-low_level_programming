/*
 * File: 0-sum_them_all.c
 * Auth: Jabessa Taye
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  Returns the sum of all its paramters
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, const unsigned int);
	}
	va_end(nums);

	return (sum);
}
