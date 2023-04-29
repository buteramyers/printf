#include "main.h"


/**
 * print_number - print an integer
 * @n: given arg
 * Return: length
 */
int print_number(int n)
{
	int i, n1, di, d, unit;
	int length = 0;

	char intmin[11] = {"-2147483648"};

	if (n == INT_MIN)
	{
		for (i = 0; i <= 10; i++)
		{
			_putchar(intmin[i]);
			length++;
		}
		return (length);
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		length++;
	}
	n1 = n;
	d = 1;
	for (unit = 1; n1 > 9; unit++)
	{
		n1 = n1 / 10;
		d = d * 10;
	}
	for (i = 1; i <= unit; i++)
	{
		di = n / d;
		n = n % d;
		d = d / 10;
		_putchar(di + '0');
		length++;
	}
	return (length);
}
/**
 * _putchar - print char
 * @c: given character
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
