#include <stdio.h>

/**
 *main - printing 0-9 a-f
 *
 *Return: always 0
 */

int main(void)
{
	int a = '0';
	int a_to_f = 'a';

	while (a <= '9')
	{
		putchar(a);

		a++;
	}


	while (a_to_f <= 'f')
	{
		putchar(a_to_f);

		a_to_f++;
	}

	putchar('\n');

	return (0);
}
