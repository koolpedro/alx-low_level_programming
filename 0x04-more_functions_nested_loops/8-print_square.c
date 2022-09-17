#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: is the size of the square
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	int i, j;
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i =  1; i <= size; i++)
	{
		for j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
