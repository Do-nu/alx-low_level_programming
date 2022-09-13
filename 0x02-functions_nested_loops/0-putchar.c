#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return: 0 if successful
 */

int main(void)
{
	char str[] = "_putchar";

	int item;

	for (item = 0; item < 8; item++)
		_putchar(str[item]);
	_putchar('\n');

	return (0);
}
