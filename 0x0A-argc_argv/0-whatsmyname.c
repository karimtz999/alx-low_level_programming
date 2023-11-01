#include <stdio.h>
/**
* main - program that prints its name, followed by a new line.
* @argv: argument list
* @argc: number of arguments
* Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
