/**
 * _isalpha - Checks if a character is an alphabetic letter.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is an alphabetic letter, 0 otherwise.
 *
 * Description: This function takes a character as input and checks if it is
 *              an alphabetic letter. It returns 1 if the character is a
 *              letter (either lowercase or uppercase), and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
