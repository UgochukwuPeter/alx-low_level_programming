#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 on termination
 */

int main(void)
{
	char letter = 'z';
	char new_line = '\n';

	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
	}
	putchar(new_line);

	return (0);

}

