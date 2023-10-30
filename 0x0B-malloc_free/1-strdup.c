#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size `size` and assign char `c` to each element
 * @size: size of array
 * @c: char to assign
 *
 * Description:
 * Create an array of size `size` and assign char `c` to each element. If size is 0 or
 * memory allocation fails, it returns NULL.
 *
 * Return: Pointer to the array, NULL if allocation fails or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
