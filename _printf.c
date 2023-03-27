#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	buffer_t buffer = {{0}, 0};
	int show_sign, space, alternate_form;
	char length;

	va_start(args, format);

	while (*format)
	{
		show_sign = 0;
		space = 0;
		alternate_form = 0;
		length = 0;

		if (*format == '%')
		{
			format++;

			/* Check for flag characters */
			while (*format == '+' || *format == ' ' || *format == '#')
			{
				if (*format == '+')
					show_sign = 1;
				else if (*format == ' ')
					space = 1;
				else if (*format == '#')
					alternate_form = 1;
				format++;
			}

			/* Check for length modifiers */
			if (*format == 'l' || *format == 'h')
			{
				length = *format;
				format++;
			}

			switch (*format)
			{
				/* Add cases for 'd', 'i', 'u', 'o', 'x', 'X' with length modifiers */
				case 'd':
				case 'i':
					count += print_int_length(&buffer, args, show_sign, space, length);
					break;
					/* Add other cases here (for 'c', 's', '%', 'b', 'p', 'S') */
				default:
					count += _putchar(&buffer, '%');
					count += _putchar(&buffer, *format);
					break;
			}
		}
		else
		{
			count += _putchar(&buffer, *format);
		}
		format++;
	}

	flush_buffer(&buffer);
	va_end(args);

	return (count);
}
