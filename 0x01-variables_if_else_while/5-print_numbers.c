#include <stdio.h>

/**
 *main - print numbers in base 10, followed by a new line.
 *Return: Always numbers in base 10, followed by a new line
 */

int main(void)
{
	char ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
