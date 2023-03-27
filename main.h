#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#define BUFFER_SIZE 1024
/**
 * struct buffer - buffer structure to store characters
 * @data: character array to store characters
 * @index: index of the next position to store a character
 */
typedef struct buffer
{
    char data[BUFFER_SIZE];
    int index;
} buffer_t;

int _printf(const char *format, ...);
int _putchar(buffer_t *buffer, char c);
int print_char(buffer_t *buffer, va_list args);
int print_string(buffer_t *buffer, va_list args);
int print_percent(buffer_t *buffer, va_list args);
int print_int_flags(buffer_t *buffer, va_list args, int show_sign, int space);
int print_binary(buffer_t *buffer, va_list args);
int print_unsigned_flags(buffer_t *buffer, va_list args, int show_sign, int space);
int print_octal_flags(buffer_t *buffer, va_list args, int alternate_form);
int print_hex_flags(buffer_t *buffer, va_list args, int uppercase, int alternate_form);
int print_string_escaped(buffer_t *buffer, va_list args);
int print_pointer(buffer_t *buffer, va_list args);
int print_int_length(buffer_t *buffer, va_list args, int show_sign, int space, char length);

#endif
