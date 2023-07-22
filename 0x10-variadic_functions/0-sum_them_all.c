#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of it's parameters
 * @n: numbers of argument pass into the function
 * Return:  the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
