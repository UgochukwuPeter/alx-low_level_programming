#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 on termination
 *
 */

int main(void)
{
	int num;

	for (num = 0 ; num <= '9' ;)
	{
	putchar(num);
	if (num <= '8')
	{
	putchar(';');
	putchar(' ');
	num++;
	}
	else
	num++;
	}
	putchar('\n');

	return (0);
}
