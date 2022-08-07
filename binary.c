#include "main.h"

/**
 * binary_recursive - numbers in binary in recursive
 * @num: number to print
 * @len: lenght of digit to print
 *
 * Return: length on success, -1 if NULL
 */

int binary_recursive(unsigned int num, int len)
{
	if (num / 2)
		len = binary_recursive(num / 2, len + 1);
	_putchar(num % 2 + '0');

	return (len);
}

/**
 * print_binary - convert unsigned int to binary
 * @parameters: int to convert
 *
 * Return: integer
 */

int print_binary(va_list parameters)
{
	int len = 0;

	unsigned int num = va_arg(parameters, unsigned int);

	len = binary_recursive(num, len) + 1;
	return (len);
}

