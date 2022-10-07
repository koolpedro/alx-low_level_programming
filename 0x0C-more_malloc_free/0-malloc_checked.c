#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memeory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: Apointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
