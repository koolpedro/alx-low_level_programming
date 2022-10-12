#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - writes the character c to stdout
 * @name: String
 * @f: Pointer to function with char parameter and no return
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
