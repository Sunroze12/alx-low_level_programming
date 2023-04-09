#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: a pointer to memory area
 * @src: a pointer from memory area
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*ptr++ = *src++;
	}
	return (dest);
}
