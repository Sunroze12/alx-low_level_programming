#include "main.h"
/**
 * _islower - funtion to check lower case alphabet
 *
 * @c: parameter of the funtion
 *
 * Return: 1 if it is a lower case and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

