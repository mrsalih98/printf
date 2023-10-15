#include "main.h"
/**
 * handle_write_char - function that Prints string
 * @c: character types
 * @array: array to handle print
 * @flags:  Calculates flags.
 * @width: get width.
 * @precision: precision specifier
 * @size: Size specifier
 *
 * Return: Numb of printed character
 */
int handle_write_char(char c, char array[],
	int flags, int width, int precision, int size)
{
int j = 0;
char pad = ' ';
UNUSED(precision);
UNUSED(size);
if (flags & FLAGS_ZERO)
{
pad = '0';
}
array[j++] = c;
array[j] = '\0';
if (width > 1)
{
array[ARRAY_SIZE - 1] = '\0';
for (j = 0;  < width - 1; j++)
{
array[ARRAY_SIZE - j - 2] = pad;
}
if (flags & FLAGS_MINUS)
{
return (write(1, &array[0], 1) +
write(1, &array[ARRAY_SIZE - j - 1], width - 1));
}
else
{
return (write(1, &array[ARRAY_SIZE - j - 1], width - 1) +
write(1, &array[0], 1));
}
}
return (write(1, &array[0], 1));
}
