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
	int count;
	va_list ap;
	char *a;
	char *b;

	if (*format == '\0')
		return (1);

	va_start(ap, format);

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					a = va_arg(ap, char *);
					write(1, &a, 1);
					count++;
					break;
				case 's':
					b = va_arg(ap, char *);
					write(1, &b, 1);
					count++;
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				default:
					write(1, "not recognized", 15);
					return (-1);
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}
