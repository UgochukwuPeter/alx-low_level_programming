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
	int num = 48;

	while (num < 58)
	{
	putchar(num);
	if (num < 57)
	{
	putchar(',');
	putchar(' ');
	}
	num++;
	}
	putchar('\n');

	return (0);
}
