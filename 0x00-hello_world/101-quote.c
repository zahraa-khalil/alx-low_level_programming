#include <stdio.h>


/**
 * main - prints and that piece of art is useful" - Dora Korpar, 2015-10-19 , followed by a new line.
 * Return: Always 1
 */
int main(void)

{
	const char *message = "that piece of art is useful - Dora Korpar, 2015-10-19\n";
 	write(1, message, strlen(message));
	return (1);
}

