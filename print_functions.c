#include "main.h"
#include <stddef.h>

/**
 * print_char - Prints character
 * @args: List of arguments
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar (c);
}

/**
 * print_string - Prints a string
 * @args: List of argument
 *
 */

int print_string(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}

/**
 * print_int - Prints the integers
 * @args - List of arguments
 *
 */

int print_int(va_list args)
{
	int i;
	int num = va_arg(args, int);
	int count = 0;
	int temp = num;
	int digit;

	if (num == 0)
	{
		_putchar('\0');
		count++;
	}
	else
	{
		if (num < 0)
		{
			_putchar('-');
			count++;
			num = -num;
		}
		while (temp != 0)
		{
			temp /= 10;
			count++;
		}
		while (count > 0)
		{
			temp = num;
			for (i = 0; i < count - 1; i++)
			{
				temp /= 10;
			}
			digit = temp % 10;
			_putchar(digit + '0');
			count--;
		}
	}
	return (count);
}

/**
 * print_percent - Prints the percentage
 * @args: Lists of arguments
 *
 */

int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (write(1, "%%", 1));
}

/**
 * print_binary - Prints the binaries
 * @args: Lists of arguments
 *
 */

int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char binary[32] = {0};
	int i;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			binary[count++] = (num % 2) + '0';
			num /= 2;
		}
		for (i = count - 1; i > 0; i--)
		{
			_putchar(binary[i]);
		}
	}
	return (count);
}

/**
 * print_unsigned - Prints unsigned characters
 * @args: lists of arguments
 *
 */

int print_unsigned(va_list args)
{
	int i;
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int temp = num;
	int digit;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (temp != 0)
		{
			temp /= 10;
			count++;
		}
		while (count > 0)
		{
			temp = num;
			for (i = 0; i < count - 1; i++)
			{
				temp /= 10;
			}
			digit = temp % 10;
			_putchar(digit + '0');
			count--;
		}
	}
	return (count);
}

/**
 * print_octal - Prints octal number
 * @args: Lists of arguments
 *
 */

int print_octal(va_list args)
{
	int i;
	unsigned int num = va_args(args, unsigned int);
	int count = 0;
	char octal[32] = {0};

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			octal[count++] = (num % 8) + '0';
			num /= 8;
		}
		for (i = count - 1; i >= 0; i--)
		{
			_putchar(octal[i]);
		}
	}
	return (count);
}

/**
 * print_hex - Prints hexadecimal binary
 * @args: lists of arguments
 * @uppercase: Prints in uppercase letter
 *
 */

int print_hex(va_list args, int uppercase)
{
	unsigned int num = va_arg(args, unsigned int);
	int i;
	int count = 0;
	char hex[32] = {0};
	char hex_chars[] = "0123456789abcdef";
	char hex_chars_upper[] = "0123456789ABCDEF";

	if (num == 0)
	{
		_putchar('\0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			hex[count++] = uppercase ? hex_chars_upper[num % 16] : hex_chars[num % 16];
			num /= 16;
		}
		for (i = count - 1; i >= 0; i++)
		{
			_putchar(hex[i]);
		}
	}
	return (count);
}
