#include <unistd.h>
#include <limits.h>
/**
 * print_binary - print an unsigned int in binary
 *
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int prtbit = 1ul << 63;
	char c = '0';

	while (!(prtbit & n) && prtbit != 0)
		prtbit = prtbit >> 1;
	if (prtbit == 0)
		write(1, &c, 1);
	while (prtbit)
	{
		if (prtbit & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		prtbit = prtbit >> 1;
	}
}
