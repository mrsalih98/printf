#include "main.h"
/**
 * print_character - Prints a character
 * @arg: the arguments
 * @array: an array to handle print
 * @flags:  Calculates  flags
 * @width: the Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars that printed
 */
int print_character(va_list arg, char array[],
int flags, int width, int precision, int size)
{
char c = va_arg(arg, int);
return (handle_write_char(c, array, flags, width, precision, size));
}
/**
 * print_string - function that Prints a string
 * @arg: List a of arguments
 * @array: array to handle print
 * @flags:  Calculates flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int print_string(va_list arg, char array[],
int flags, int width, int precision, int size)
{ int length = 0, j;
char *string = va_arg(arg, char *);
UNUSED(array), UNUSED(flags), UNUSED(width), UNUSED(precision), UNUSED(size);
if (string == NULL)
{ string = "(null)";
if (precision >= 6)
string = "      "; }
while (string[length] != '\0')
{ length++; }
if (precision >= 0 && precision < length)
{ length = precision; }
if (width > length)
{
if (flags & FLAGS_MINUS)
{ write(1, &string[0], length);
for (j = width - length; j > 0; j--)
{ write(1, " ", 1); }
return (width); }
else
{
for (j = width - length; j > 0; j--)
{ write(1, " ", 1); }
write(1, &string[0], length);
return (width); }}
return (write(1, string, length)); }
/**
 * print_percent - function that Prints a percent sign
 * @arg: Lista of arguments
 * @array: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int print_percent(va_list arg, char array[],
int flags, int width, int precision, int size)
{ UNUSED(arg), UNUSED(array), UNUSED(flags), UNUSED(width), UNUSED(precision);
UNUSED(size);
return (write(1, "%%", 1)); }
