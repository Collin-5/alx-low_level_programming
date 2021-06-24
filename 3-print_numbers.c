#include "holberton.h"

/**
 * print_numbers - printing 0 - 9
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
