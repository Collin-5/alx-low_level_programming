#include <stdio.h>

/**
 * main - printing number comp]binations
 *
 * Return: always 0
 */

int main(void)
{
	int first;
	int second;
	int third;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = (first + 1); second <= '9'; second++)
		{
			for (third = (second + 1); third <= '9'; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);

				if (first != '7' || second != '9' || third || third != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
