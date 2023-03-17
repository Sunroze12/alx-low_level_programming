#include <stdio.h>
/**
 * main - main entry
 *
 * Return: always 0
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
