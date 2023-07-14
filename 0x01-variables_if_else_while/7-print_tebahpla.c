#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lcase;

	for(lcase = 'z'; lcase >= 'a'; lcase--)
		putchar(lcase);

	putchar('\n');

	return (0);
}
