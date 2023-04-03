#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: a pointer to a string
 * @c: a character to locate
 *
 * Return: a pointer to the first occurrence of the character c
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
