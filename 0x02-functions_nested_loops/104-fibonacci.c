#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers.
 * Description - a program that finds and prints the first 
 * 		98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fib_next;
	int count;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		fib_next = fib1 + fib2;
		printf(", %lu", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");

	return (0);
}
