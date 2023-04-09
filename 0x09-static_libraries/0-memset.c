#include "main.h"

/**
 * _memset - a funtion that fills memory with a constant byte.
 * @s: pointer to memory area 's'
 * @b: constant byte
 * @n: number of bytes of the memory area.
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
