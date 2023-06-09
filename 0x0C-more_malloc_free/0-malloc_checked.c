#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a funtion that allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory
 * if malloc fails,exit with status value of 98
 */
void *malloc_checked(unsigned int b)
{

	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
