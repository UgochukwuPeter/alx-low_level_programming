#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char ch = 'a';
	char line = '\n';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(line);


	return (0);
}
