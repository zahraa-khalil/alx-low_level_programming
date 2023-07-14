#include <stdio.h>

/**
 *main - print the alphabet in lowercase, followed by a new line.
 *Return: Always alphabet in lowercase, followed by a new line
 */

int main(void)
{
	int n, j, i;

	for (n = 0; n <= 9; n++)
	{
		for (j = n + 1; j <= 9; j++)
		{
			for (i = j + 1; i <= 9; i++)
			{
				putchar('0' + n);
				putchar('0' + j);
				putchar('0' + i);
				if (n == 7 && j == 8 && i == 9)
				{
					continue;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
