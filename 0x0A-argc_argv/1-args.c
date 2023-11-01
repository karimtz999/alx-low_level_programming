#include <stdio.h>
/**
 * main - main function for the application and application
 * @argc: argument
 * @argv: argument list
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	argc--;

	printf("%d\n", argc);
	return (0);
}
