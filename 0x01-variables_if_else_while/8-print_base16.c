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
	char *str = "123456789abcdef";

	for (num = 0; num <= 15; num++)
	{
	putchar(str[num]);
	}
	putchar('\n');

	return (0);
}
