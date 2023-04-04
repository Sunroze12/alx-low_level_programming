#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer to a pointer to a char
 * @to: is a pointer to a char
 *
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; *(to + i) != '\0'; i++)
	{
		*(*s + i) = *(to + i);
	}
	*(*s + i) = '\0';
}
