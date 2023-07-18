#include "main.h"

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The number for which the times table is printed
 * Description - a function that prints the n times table,
 * starting with 0.
 */

void print_times_table(int n)
{
	int row, column, product;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;

			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10 && column != 0)
				_putchar(' ');

			if (product < 100)
				_putchar(' ');

			if (product >= 100)
				_putchar((product / 100) + '0');

			if (product >= 10)
				_putchar(((product / 10) % 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
