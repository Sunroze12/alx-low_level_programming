#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - function to allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *tmp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	tmp = ptr;

	for (i = 0; i < nmemb * size; i++)
		tmp[i] = 0;

	return (ptr);
}
