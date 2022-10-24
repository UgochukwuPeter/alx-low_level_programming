#include "main.h"
#include <stdio.h>
/**
 * _puts - a function  that prints a string.
 * @str: a pointer points to a string
 *
 * Retur: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
