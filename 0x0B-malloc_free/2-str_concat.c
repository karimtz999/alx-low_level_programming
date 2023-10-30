#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings and return the result
 * @s1: the first string
 * @s2: the second string
 * Return: a new string containing the concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (ci = 0; s2[ci] != '\0'; ci++)
		;

	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		conct[i] = s1[i];

	for (ci = 0; s2[ci] != '\0'; ci++)
	{
		conct[i] = s2[ci];
		i++;
	}

	conct[i] = '\0';
	return (conct);
}
