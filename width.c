#include "main.h"
#include "util.c"
/**
 * get_width - Calculates the width for printing
 * Description: c programm
 * @format: Formatted string
 * @ar: List of arguments to be printed.
 * @arg: list of arguments
 * Return: width.
 */
int get_width(const char *format, int *ar, va_list arg)
{
int current_ar = *ar + 1;
int width = 0;
while (format[current_ar] != '\0')
{
if (is_digit(format[current_ar]))
{
width = width * 10;
width = width + format[current_ar] - '0';
}
else if (format[current_ar] == '*')
{
current_ar++;
width = va_arg(arg, int);
break;
}
else
{
break;
}
current_ar++;
}
*ar = current_ar - 1;
return (width);
}
