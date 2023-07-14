#include <stdio.h>

/**
 *main - print the alphabet in lowercase & uppercase
 *Return: Always alphabet, followed by a new line
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++) {
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
