/**
 * _isupper - checks for uppercase character
 * @c: letter to be check
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
		res = 1;
	else
		res = 0;
	return (res);
}
