#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * Description - a program that prints the first 50
 * Fibonacci numbers, starting with 1 and 2
 * Return: Always 0.
 */

int main(void)
{
	int a = 1;
	int b = 2;

	printf("%d, %d", a, b);

	for (int i = 3; i <= 50; i++)
	{
		int c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	
	printf("\n");

	return (0);
}
