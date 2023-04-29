#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - print formatted text
 * @format: array of strings
 * Return: count
 */
int _printf(const char *format, ...)
{
	int count, n;
	va_list args;

	if (*format == '\0')
		return (1);

	va_start(args, format);

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				n = va_arg(args, int);
				count += print_number(n);
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
