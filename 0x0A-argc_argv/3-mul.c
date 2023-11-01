#include <stdio.h>
#include <stdlib.h>
/**
* main - program that multiplies two numbers.
* @argv: argument list
* @argc: number of arguments
* Return: EXIT_SUCCESS or EXIT_FAILURE
*/
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1, num2, i;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		i = num1 * num2;
		printf("%d\n", i);
		return (0);
	}

}
