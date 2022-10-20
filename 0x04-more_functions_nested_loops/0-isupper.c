/**
 * is_upper - a function that checks for uppercase character
 * @c: the character to be checkhed
 *
 * Return: 1 on success
 * return 0 otherwise
 */

int is_upper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
