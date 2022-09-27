#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c.
 * @s: Apointer to the memory area to be filled.
 * @c: the character to fill the memory arae with.
 * @n: the number of bytes to be filled.
 * description_memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 *
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		 memory[index] = value;

	return (memory);
}
