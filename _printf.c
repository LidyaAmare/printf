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
	pt_fmt pt_format[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_digit},
		{"i", print_digit},
		{"%", print_percent},
		{"b", print_binary_conv},
		{"u", print_unsig_int},
		{"o", print_oct},
		{"x", print_hex_low},
		{"X", print_hex_upper},
		{NULL, NULL}
	};

	va_list valist;
	int num_ch = 0;

	va_start(valist, format);
	num_ch = get_print(format, valist, pt_format);
	va_end(valist);
	return (num_ch);
}
