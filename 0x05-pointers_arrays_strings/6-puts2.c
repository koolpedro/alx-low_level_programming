#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - print string twice
 *
 * @str: string to put twice
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (1 % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
