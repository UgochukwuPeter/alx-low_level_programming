#include "main.h"

/**
 * main - prints the string putchar
 *
 * Return: 0 on success
 */

int main(void)
{
	char *str;
	int i;

	str = "_putchar";
	for(i= 0; i < 9; i++)
	{
	_putchar(str[i]);
	}
	_putchar("\n");
	return (0);
}
