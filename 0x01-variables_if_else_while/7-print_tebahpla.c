#include <stdio.h>

/**
 * main - print alphabet reverse
 *
 * Return: always 0
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
