#include "main.h"
#include <string.h>
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes
 * @s: pointer to string to search through
 * @accept: array of bytes to search for
 *
 * Return:  pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
