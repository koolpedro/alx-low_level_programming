#include "main.h"
/**
 * puts2 - that prints every other character of a string
 * @str: variable pointer
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_puts2(str[i]);
	}
	Return (0);
}
