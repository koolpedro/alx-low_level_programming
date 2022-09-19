#include "main.h"

/**
 * puts2 - print string twice
 *
 * @str: string to put twice
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
