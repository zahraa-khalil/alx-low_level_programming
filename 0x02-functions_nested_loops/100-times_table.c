#include "main.h"

/**
 *print_times_table - prints the n times table, starting with 0
 *@n: the number of times
 *Return: returns nothing
 */

void print_times_table(int n)
{
	int num, multiplied, res;

	if (n >= 15 || n <= 0)
	{
		return;
	}
	else
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (multiplied = 1; multiplied <= n; multiplied++)
			{
				_putchar(',');
				_putchar(' ');

				res = num * multiplied;
                
				if (res <= 9)
				{
                    _putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res >= 10 && res <= 99)
				{
                    _putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				}
			}

			_putchar('\n');
		}
	
    }
}
