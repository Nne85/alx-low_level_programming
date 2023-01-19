#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTION_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#include<stdarg.h>
/**
 * struct print - multiple choice print
 * @x:char
 * @T_func: funct
 */
typedef struct print
{
	char *x;
	void (*T_func)(va_list);
} t_print;

#endif
