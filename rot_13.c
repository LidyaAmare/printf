#include "main.h"

/**
 * rot_13 - convert ROT13 to text
 * @parameters: argument
 *
 * Return: number of characters to be print
 */

int rot_13(va_list parameters)
{
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chs[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	unsigned int i = 0, j = 0;
	int s;
	char *str;

	s = 0;
	str = va_arg(parameters, char *);
	if (str == NULL)
		str = "(NULL)";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (ch[j] == str[i])
			{
				_putchar(chs[j]);
				s++;
				break;
			}
		}
		if (ch[j] == '\0')
		{
			_putchar(str[i]);
			s++;
		}
	}
	return (s);
}
