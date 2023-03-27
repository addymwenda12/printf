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

#endif
