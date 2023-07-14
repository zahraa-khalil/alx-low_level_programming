#include <stdio.h>

/**
 *main - print the alphabet in lowercase, followed by a new line.
 *Return: Always alphabet in lowercase, followed by a new line
 */

int main(void)
{
	int n, j;

	for (n = 0; n <= 9; n++)
	{
		for (j = n + 1; j <= 9; j++)
		{
			putchar('0' + n);
			putchar('0' + j);
			if (n == 8 && j == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
