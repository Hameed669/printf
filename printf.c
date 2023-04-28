#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed
 * (excluding null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	char buffer[BUFF_SIZE];

	va_start(args, format);
	if (format == NULL)
		return (-1);

	check_format(format, args, &count, buffer);

	if (count > 0)
		write(1, buffer, count);

	va_end(args);
	return (count);
}
