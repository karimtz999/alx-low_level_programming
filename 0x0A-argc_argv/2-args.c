#include <stdio.h>
/**
* main - main function
* @argc: number of arguments
* @argv: command line arguments
* Return: int
*/
int main(int argc, char *argv[])
{
	int in;

	for (in = 0; in < argc; in++)
	{
		printf("%s\n", argv[in]);
	}
	return (0);
}
