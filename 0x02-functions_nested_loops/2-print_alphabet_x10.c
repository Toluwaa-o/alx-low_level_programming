#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times, followed by a new line.
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 *              ten times, with each set of alphabets separated by a comma
 *              and a space. It then prints a new line.
 */


void print_alphabet_x10(void)
{
	int tenTimes;
	char letters;

	for (tenTimes = 0; tenTimes < 10; tenTimes++)
	{
		letters = 'a';
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');
	}
}
