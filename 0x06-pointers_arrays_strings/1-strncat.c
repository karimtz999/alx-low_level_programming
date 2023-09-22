#include <stdio.h>

/**
  * _strncat - a function that concatenates two strings
  *
  * @dest: a pointer
  *
  * @src: a pointer
  *
  * @n: integer
  *
  * Return: 0
  */
char *_strncat(char *dest, char *src, int n)
{
	int n1 = 0;
	int n2 = 0;

	while (dest[n1] != 0)
	{
		n1++;
	}
	while (n2 != n && src[n2] != 0)
	{
		dest[n1] = src[n2];
		n2++;
		n1++;
	}
	dest[n1] = '\0';
	return (dest);
<<<<<<< HEAD
}
=======
}
>>>>>>> e9893a2b70102cc944e04a7024be0fa8383912fe
