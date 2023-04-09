#include "main.h"
#include <stddef.h>
/**
 * _strstr -  a function that locates a substring
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the substring
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;

	for (p1 = haystack; *p1 != '\0'; p1++)
	{
		p2 = needle;
		p3 = (p1);

		while (*p2 != '\0' && *p3 != '\0' && *p2 == *p3)
		{
			p2++;
			p3++;
		}

		if (*p2 == '\0')
			return (p1);
	}
	return (NULL);
}
