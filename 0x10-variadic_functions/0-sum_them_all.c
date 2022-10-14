#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sumNum = 0;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
		sumNum += va_arg(num, int);

	va_end(num);

	return (sumNum);
}
