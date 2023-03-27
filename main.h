#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * struct pf_specifier - Structure for specifiers
 * @s: String to compare
 * @f: Pointer to a function to execute
 *
 */

typedef struct pf_specifier
{
	char *s;
	int (*f)();
} pf_s;

/* Printf functions */
int _printf(const char *format, ...);
int _putchar(char *buffer, char s);

/* Function specifiers */
int print_char(va_list args, char *buffer);
int print_string(va_list args, char *buffer);
int print_percentage(va_list args, char *buffer);

/* Buffer functions */
void buffer_print(char *buffer, int size);
void buffer_remove(char *buffer);
int buffer_pos(char *buffer);
char *buffer_init();
int buffer_add(char *buffer, char s);
char *buffer_flush(char *buffer);

/* Verification */
int (*verify_format(const char *s))();

/* Function specifiers 2 */
int print_number(int n, char *buffer);
int print_d(va_list args, char *buffer);
int print_i(va_list args, char *buffer);

/* Advanced task */
int print_number_a(unsigned int, char *buffer);
int print_b(va_list args, char *buffer);
int print_b(va_list args, char *buffer);
int print_u(va_list args, char *buffer);
int print_o(va_list args, char *buffer);
int print_x(va_list args, char *buffer);
int print_X(va_list args, char *buffer);
int print_hexa(char s, char *buffer);
int print_S(va_list args, char *buffer);
int print_r(va_list args, char *buffer);
int print_p(va_list args, char *buffer);
int print_R(va_list args, char *buffer);

#endif
