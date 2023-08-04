#include <stdio.h>

/**
 *main - function prints number of arguments passed into it.
 *@argc: argc parameter
 *@argv: an array of a command listed
 *Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
