#include "main.h"
#include <stdlib.h>
/**
 * main - a function that multiplies two positive numbers
 *  @argc: numbers of argument
 *  @argv: arrays of arguments
 *
 *  Return: return 0 on sucess, 1 if fail
 */
int main(int argc, char *argv[])
{
	int i, j, m, len, len1, len2, tmp, carry, flag1, flag2;
	char *er, *str1, *str2, *temp1, *temp2, *mul;

	er = "Error";
	carry = tmp = m = 0;
	if (argc != 3)
	{
		for (i = 0; er[i] != '\0'; i++)
			_putchar(er[i]);
		_putchar('\n');
		exit(98);
	}
	flag1 = check_0_9(argv[1]);
	flag2 = check_0_9(argv[2]);
	if (flag1 == 0 || flag2 == 0)
	{
		for (i = 0; er[i] != '\0'; i++)
			_putchar(er[i]);
		_putchar('\n');
		exit(98);
	}
	len1 = string_len(argv[1]);
	len2 = string_len(argv[2]);
	len = len1 + len2;
	if (len1 >= len2)
	{
		str1 = malloc(sizeof(char) * len1 + 1);
		str2 = malloc(sizeof(char) * len2 + 1);
		temp1 = malloc(sizeof(char) * len1 + 2);
		temp2 = malloc(sizeof(char) * len1 + 2);
		mul = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		str1 = malloc(sizeof(char) * len2 + 1);
		str2 = malloc(sizeof(char) * len1 + 1);
		temp1 = malloc(sizeof(char) * len2 + 2);
		temp2 = malloc(sizeof(char) * len2 + 2);
		mul = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (str1 == NULL || str2 == NULL || mul == NULL || temp1 == NULL || temp2 == NULL)
	{
		free(str1);
		free(str2);
		free(temp1);
		free(temp2);
		free(mul);
		for (i = 0; er[i] != '\0'; i++)
			_putchar(er[i]);
		_putchar('\n');

		exit(98);
	}
	/** str1 always longer than str2 **/

}
