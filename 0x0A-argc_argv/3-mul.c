#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that print the result of the multiplication
 *@argc: argc parameter
 *@argv: an array of a command listed
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int multi = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", multi);
	}

	return (0);
}
