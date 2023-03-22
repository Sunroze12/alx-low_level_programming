#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @n: the number to be comptuted
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
