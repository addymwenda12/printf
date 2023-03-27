#include "main.h"
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * flush_buffer - Flushes the buffer by writing its content to stdout
 * @buffer: Pointer to the buffer structure
 */

void flush_buffer(buffer_t *buffer)
{
	write(1, buffer->data, buffer->index);
	buffer->index = 0;
}

/**
 * _putchar - Writes a character to the buffer
 * @buffer: Pointer to the buffer structure
 * @c: Character to write
 *
 * Return: 1 on success
 */
int _putchar(buffer_t *buffer, char c)
{
	if (buffer->index >= BUFFER_SIZE)
	{
		flush_buffer(buffer);
	}

	buffer->data[buffer->index++] = c;
	return (1);
}
