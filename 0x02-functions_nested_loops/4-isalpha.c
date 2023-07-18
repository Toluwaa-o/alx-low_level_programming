/*
 * _isalpha - checks if c is a letter, lowercase or uppercase.
 * @c - is the character to be checked.
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' || c <= 'z')
		return (1);
	else
		return (0);
}
