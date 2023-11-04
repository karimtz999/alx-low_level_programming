#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory allocated
 * Return: if worked, the pointer to the memory allocated, exit(98) otherwise
 */

void *malloc_checked(unsigned int b)
{
	// Allocate memory block of size 'b'
	int *memory = malloc(b);
	
	// Check if memory allocation failed
	if (!memory)
	{
		// Terminate program with exit code 98
		exit(98);
	}
	
	// Return allocated memory block
	return (memory);
}
