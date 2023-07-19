#include <stdio.h>

/**
 *main - Prints first 50 Fibonacci numbers, from 1 and 2,
 *       separated by a ',' followed by space.
 *
 *Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fab1 = 0, fab2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fab1 + fab2;
		printf("%lu", sum);

		fab1 = fab2;
		fab2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}