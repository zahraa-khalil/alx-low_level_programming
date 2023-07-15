#include <stdio.h>

/**
 *main - print the alphabet in lowercase, followed by a new line.
 *Return: Always alphabet in lowercase, followed by a new line
 */

int main(void)
{
	int n, j;

	for (n = 10; n <= 99; n++)
	{
		for (j = n + 1; j <= 99; j++)
		{
			putchar('0' + n / 10);
			putchar('0' + n % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			if (n < 98 || j < 99)
			{
				putchar(',');
				putchar(' ');
		}	}
	}
	putchar('\n');

	return (0);
}
