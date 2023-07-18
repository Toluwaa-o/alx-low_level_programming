#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * Description - a program that prints the first 50
 * Fibonacci numbers, starting with 1 and 2
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long int fib1 = 1, fib2 = 2, fib_next;

	printf("%llu, %llu", fib1, fib2);
	
	for (i = 3; i <= 50; i++)
	{
		fib_next = fib1 + fib2;
		printf(", %llu", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");

	return (0);
}
