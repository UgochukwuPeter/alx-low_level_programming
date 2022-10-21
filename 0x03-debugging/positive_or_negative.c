#include<stdlib.h>                                                                                                                      
#include<time.h>
#include <stdio.h>
/**
 * main- begins main function
 * initializing varigable n
 * n uses srand to get random postivie and negative integers
 * if statement compares if the value is less than 0 or not
 *
 * Return: zero on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);

	if (n < 0)
	printf("%d is negative\n", n);

	if (n == 0)
	printf("%d is zero\n", n);
	return (0);

}
