#include "main.h"
/**
 * print_times_table - print table for n
 * @n: max number for table
 * Return: none
 */
int print_times_table(int n)
{
	int i;
	int j;
	int product;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar(product + '0');
			}

			if (product < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			} else if (product >= 10 && product <= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			} else if (product >= 100) {
				_putchar(',');
				_putchar(' ');
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
