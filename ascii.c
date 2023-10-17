#include "main.h"
/**
 * pr_non_printable - function that Prints ascii codes in hexa of
 * non printable characters
 * @arg: Lista of arguments
 * @array: array to handle print
 * @flags:  Calculates flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int pr_non_printable(va_list arg, char array[],
int flags, int width, int precision, int size)
{
int j = 0, off_set = 0;
char *string = va_arg(arg, char *);
UNUSED(flags), UNUSED(width), UNUSED(precision);
UNUSED(size);
if (string == NULL)
{ return (write(1, "(null)", 6)); }
while (string[j] != '\0')
{
if (is_printable(string[j]))
{ array[j + off_set] = string[j]; }
else
{ off_set += append_hexadecimal_code(string[j], array, j + off_set);
}
j++;
}
array[j + off_set] = '\0';
return (write(1, array, j + off_set));
}
