#include "main.h"

/**
 * _printf - produces output according to a format.
 * @*format: a character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to stringd)
 */
int _printf(const char *format, ...)
{
	va_list arguments;

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[1] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format [1] == ' ' && !format[2])
		return (-1);
	_putchar (-1);
	va_end(arguments);
	return (count);
}
