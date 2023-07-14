#include <stdio.h>

/**
 *main - print the alphabet in lowercase, followed by a new line.
 *Return: Always alphabet in lowercase, followed by a new line
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
