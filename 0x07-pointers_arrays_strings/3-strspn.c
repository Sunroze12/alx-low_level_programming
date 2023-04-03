#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: segment of bytes
 * @accept: string of bytes to compare with
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (!accept[j])
		{
			return (k);
		}
	}
	return (k);
}

