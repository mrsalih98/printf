#include "main.h"
#include "flags.c"
#include "precision.c"
#include "get_size.c"
#include "width.c"
#include "h_print.c"
void print_array(char array[], int *array_index);

/** _printf - Printf function
 * Description: c programm
 * @format: the format.
 * Return: the Printed chars.
 */
int _printf(const char *format, ...)
{
int n, pr = 0, printed_ch = 0;
int flags, width, precision, size, array_index = 0;
va_list arg;
char array[ARR_SIZE];
va_start(arg, format);
if (format == NULL)
{
return (-1);
}
for (n = 0; (format[n] && format) != '\0'; n++)
{
if (format[n] != '%')
{
array[array_index++] = format[n];
if (array_index == ARR_SIZE)
print_array(array, &array_index);
printed_ch++;
}
else
{
print_array(array, &array_index);
flags = get_flags(format, &n);
width = get_width(format, &n, arg);
precision = get_precision(format, &n, arg);
size = get_size(format, &n);
++n;
pr = h_print(format, &n, arg, array, flags, width, precision, size);
if (pr == -1)
{
return (-1);
}
printed_ch += pr;
}
}
print_array(array, &array_index);
va_end(arg);
return (printed_ch);
}
/**
 * print_array - Prints the contents of array
 * @array: Array of chars
 * @array_index: Index at which to add next char
 */
void print_array(char array[], int *array_index)
{
if (*array_index > 0)
{
write(1, &array[0], *array_index);
}
*array_index = 0;
}
