#include <stdio.h>

/*
 * print_sign - check if n is zero, greater than or
 * 		less than zero.
 * @n - character to be checked.
 *Description - a function that prints the sign of a number.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
