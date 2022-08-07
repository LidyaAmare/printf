#include "main.h"
#include <stdarg.h>

/**
 *print_c - function to print character
 *@parameters: characters to print
 *
 *Return: number of character or -1
 */

int print_c(va_list parameters)
{
char character = va_arg(parameters, int);

return (_putchar(character));
}

/**
 *print_s - function to print string
 *@parameters: string to print
 *
 *Return: number of characters to print
 */

int print_s(va_list parameters)
{
	int count;
	char *str = va_arg(parameters, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);

	return (count);
}

/**
 *print_percent - function to print %
 *@parameters: unused
 *
 *Return: always 1
 */

int print_percent(__attribute__((unused))va_list parameters)
{
	char c = '%';
	_putchar(c);

	return (1);
}


/**
 * print_integer - prints an integer
 * @parameters: integer to print
 *
 * Return: number of chars and digits printed
 */

int print_integer(va_list parameters)
{
	int x[10];
	int f, d, t, y, i;

	t = va_arg(parameters, int);
	i = 0;
	d = 1000000000;
	x[0] = t / d;

	for (f = 1; f < 10; f++)
	{
		d /= 10;
		x[f] = (t / d) % 10;
	}

	if (t < 0)
	{
		_putchar('-');
		i++;
		for (f = 0; f < 10; f++)
			x[f] *= -1;
	}

	for (f = 0, y = 0; f < 10; f++)
	{
		y += x[f];
		if (y != 0 || f == 9)
		{
			_putchar('0' + x[f]);
			i++;
		}
	}

	return (i);
}

/**
 *print_decimal - print a decimal
 *@parameters: decimal to print
 *
 *Return: number of characters and digits printed
 */

int print_decimal(va_list parameters)
{
	int x[10];
	int f, d, t, y, i;

	t = va_arg(parameters, int);
	i = 0;
	d = 1000000000;
	x[0] = t / d;

	for (f = 1; f < 10; f++)
	{
		d /= 10;
		x[f] = (t / d) % 10;
	}

	if (t < 0)
	{
		_putchar('-');
		i++;
		for (f = 0; f < 10; f++)
			x[f] *= -1;
	}

	for (f = 0, y = 0; f < 10; f++)
	{
		y += x[f];
		if (y != 0 || f == 9)
		{
			_putchar('0' + x[f]);
			i++;
		}
	}

	return (i);
}
