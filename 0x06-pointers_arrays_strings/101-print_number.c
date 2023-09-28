#include <stdio.h>
#include "main.h"
/**
* print_number - prints an integer
* @n:integer to be printed
* Return: void
*/
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	if (num <= 9)
	{
		_putchar(num + '0');
	return;
	}
	print_number(num / 10);
	print_number(num % 10);
<<<<<<< HEAD
}
=======
}
>>>>>>> e9893a2b70102cc944e04a7024be0fa8383912fe
