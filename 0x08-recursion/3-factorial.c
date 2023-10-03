/**
 * factorial - a function that returns the factorial of a given number
 * @n: a given number
 *
 * Return: factorial value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
