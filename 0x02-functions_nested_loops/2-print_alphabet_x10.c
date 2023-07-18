#include "main.h"

/*
 * print_alphabet_x10 - Print the alphabets in lower case 10 times
 */

void print_alphabet_x10(void)
{
	int tenTimes;
	char letters;

	for (tenTimes = 10; tenTimes > 0; tenTimes++)
	{
		letters = 'a';
		while (letters <= 'z')
		{
			_putchar(letters);
			_putchar('\n');
			letters++;
		}
	}
}
