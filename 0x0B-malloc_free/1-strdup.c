#include "main.h"
/**
* _strdup - strdup and  append to the end of the string buffer
* @str: the string to append
* Return: the new string
*/
char *_strdup(char *str)
{
	int i, j;

	char *p;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(i + 1);

	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	p[j] = '\0';

	return (p);

}
