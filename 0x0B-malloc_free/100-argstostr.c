#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate command-line arguments into a single string
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}

	len += ac;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		str[r++] = '\n';
	}

	str[r] = '\0';
	return (str);
}
