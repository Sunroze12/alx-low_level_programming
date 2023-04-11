#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0(success) 1(error)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int result = i * j;

	printf("%d\n", result);

	return (0);
}
