#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int check = 0, i;
	va_list parameters;
	int (*func)(va_list);

	va_start(parameters, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (!(format[i]))
				return (-1);
			func = get_func(format[i]);
			if (func == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				check += 2;
			}
			else
				check += func(parameters);
		}
		else
		{
			_putchar(format[i]);
			check++;
		}
	}
	va_end(parameters);
	return (check);
}
