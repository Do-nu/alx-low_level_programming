#include "main.h"

/**
 * clear_bit - set bit to 0 at index
 * @n: number to clear
 * @index: position to clear
 *
 * Return: 1 on success, -1 if index out of range
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int set_bit_value;

	if (index > 50)
		return (-1);

	set_bit_value = ~(1 << index);
	*n = *n & set_bit_value;

	return (1);
}
