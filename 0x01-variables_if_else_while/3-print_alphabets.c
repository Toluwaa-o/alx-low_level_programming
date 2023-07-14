#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet, followed by the uppercase alphabet,
 *              using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	/* Print lowercase alphabet */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);

	/* Print uppercase alphabet */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);

	putchar('\n');

	return (0);
}
