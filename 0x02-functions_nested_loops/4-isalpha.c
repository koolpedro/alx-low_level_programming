#include "main.h"

/**
 * _isalpha - Checks for alphabetic character, if c is a letter, lowercase or uppercase
 * @c: character to check
 * Return: 0 if not alphabet character
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
