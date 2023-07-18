#include "main.h"

/*
 * description - Print the alphabets in lower case 10 times
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
