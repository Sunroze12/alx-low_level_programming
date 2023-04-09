#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: The string to get the length of.
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		(length++);
		s++;
	}

	return (length);
}
