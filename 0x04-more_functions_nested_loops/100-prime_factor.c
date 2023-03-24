#include <stdio.h>
#include "math.h"
/**
 * main - finds and prints the largest prime factor of the number
 * Return: always 0
 */
int main(void)
{
	int  a, f;

	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number %  a  == 0)
		{
		f = number / a;
		}
		}
	printf("%d\n", f);
	return (0);
}
