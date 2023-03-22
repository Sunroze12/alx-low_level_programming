#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @a: the number to use
 * Return: value of last digit of our number
 */
int print_last_digit(int a)
{
	int digit;

	digit = a % 10;
	if (digit < 0)
	{
	digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
