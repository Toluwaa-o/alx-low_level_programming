#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 * Description - a function that prints the 
 * 		last digit of a number.
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	printf("%d", last_digit);

	return (last_digit);
}

