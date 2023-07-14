#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number <= 10; number++)
	{
		if (number > 9)
		{
			for (letter = 'a'; letter <= 'f'; letter++)
				putchar(letter);
		}
		else
		{
			putchar('0' + number);
		}
	}

	putchar('\n');

	return (0);
}

