#include<stdlib.h>                                                                                                                      
#include<time.h>                                                                                                                        
#include <stdio.h>
/**
 * main- begins main function
 * initializing varigable n
 * n uses srand to get random postivie and negative integers
 * last_digit is used to get the last number using modulus
 * if statement compares numbers and prints results based on the condition
 *
 * Return: zero on success
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 2;
	if (n > 5)
	printf("The last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (n == 0)
	printf("The last digit of %d is %d and is 0\n", n, last_digit); 
	else if (n < 6)
	printf("The last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
