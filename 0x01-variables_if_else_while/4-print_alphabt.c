#include <stdio.h>

/**
 *main - root function
 *
 *Return: always 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
			alpha++;
	}
	putchar('\n');

	return (0);
}
