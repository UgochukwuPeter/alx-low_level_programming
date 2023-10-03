#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 on termination
 */

int main(void)
{
	int n;
	char *str = "0123456789";

	for (n = 0 ; n <= 9; n++)
	{
	putchar(str[n]);
	}
	putchar('\n');


	return (0);



}

