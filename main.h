#ifndef _PRINTF_H_
#define _PRINTF_H_

#define BUFSIZE MAXLENGTH

/* Importing Libraries */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* Type Definitions */

/**
 *struct format - structure for printing various types
 *@spc: type to print
 *@f: function to print
 */

typedef struct format
{
        const char spc;
        int (*f)(va_list);
} format_t;

/* Function Prototypes */

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list parameters);
int print_s(va_list parameters);
int print_percent(__attribute__((unused))va_list parameters);
int print_i(va_list parameters);
int print_d(va_list parameters);
int (*get_func(const char a))(va_list);
int print_integer(va_list parameters);
int print_decimal(va_list parameters);
int binary_recursive(unsigned int num, int len);
int print_binary(va_list parameters);
int print_unint(va_list parameters);
int print_octal(va_list args);
int rot_13(va_list parameters);


#endif /* _PRINTF_H_ */
