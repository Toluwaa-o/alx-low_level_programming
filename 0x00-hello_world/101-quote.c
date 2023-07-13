#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the string "and that piece of art is useful"
 *              - Dora Korpar, 2015-10-19, followed by a newline, to the standard error.
 *              It uses the write function to write the message to the STDERR_FILENO.
 *              The program returns 1 to indicate failure.
 *
 * Return: Always EXIT_FAILURE (1)
 */

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, message, strlen(message));

	return (EXIT_FAILURE);
}
