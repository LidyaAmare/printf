#include "main.h"
/**
 * print_unint - prints an unsigned int number
 * @parameters: argument
 *
 * Return: number of characters printed
 */

int print_unint(va_list parameters)
{
	int i = 0;
	unsigned int num = va_arg(parameters, unsigned int);
	int j = 1;

	while (num / j > 9)
	{
		j *= 10;
	}

	while (j > 0)
	{
		_putchar(num / j + '0');
		i++;
		num %= j;
		j /= 10;
	}
	return (i);
}
