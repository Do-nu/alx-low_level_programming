#include <stdio.h>
#include "main.h"

/**
 * infinite_add - for addition of numbers
 *
 * @n1: first number
 *
 * @n2: number two
 *
 * @r: buffer for result expected
 *
 * @size_r: size of buffer
 *
 * Return: address of r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;

	i = 0;
	j = 0;

	while (n1[i])
		i++;
	while (n2[j])
		j++;
	if (i > size_r || j > size_r)
		return (0);

	m = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		n = m;
		if (i >= 0)
			n += n1[a] - '0';
		if (i >= 0)
			n += n2[b] - '0';
		if (i < 0 && j < 0 && n == 0)
			break;
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l--)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}

	return (r);
}
