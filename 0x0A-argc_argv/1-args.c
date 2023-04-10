#include <stdio.h>
#include "main.h"
 /**
  * main - prints the number of arguments passed into it.
  * @argc: the number of command line arguments
  * @argv: the array of arrgument
  *
  * Return: always 0
  */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
