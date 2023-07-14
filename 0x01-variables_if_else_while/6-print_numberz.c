#include <stdio.h>

/**
 *main - print numbers in base 10, followed by a new line.
 *Return: Always numbers in base 10, followed by a new line
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}

	putchar('\n');

	return (0);
}
