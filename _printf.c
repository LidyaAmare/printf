#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int op_checker(char c, va_list ap)
{
	int i;
	func_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},
		{"b", print_binary},
		{NULL, NULL}
	};

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (c == *(ops[i].op))
		{
			return (ops[i].f(ap));
		}
	}
	return (-1);
}

/**
 * _printf - Printf function
 * @format: The format of the string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, ret = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ret += op_checker(format[i], ap);
		}
		else
		{
			_putchar(format[i]);
			ret++;
		}
		i++;
	}
	va_end(ap);

	return (ret);
}
