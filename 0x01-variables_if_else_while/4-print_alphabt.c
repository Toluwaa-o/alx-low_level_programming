#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the uppercase alphabet using putchar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;
	for (letter = "A": letter <= "Z"; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

