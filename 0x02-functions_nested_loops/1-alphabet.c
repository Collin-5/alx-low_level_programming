#include <holberton.h>

/**
 * print_alphabet - printing alphabet lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');

	return (0);
}
