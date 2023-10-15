#include "main.h"
/**
 * width - Calculates the width for printing
 * Description: c programm
 * @format: Formatted string
 * @ar: List of arguments to be printed.
 * @arg: list of arguments
 * Return: width.
 */
int width(const char *format, int *ar, va_list arg)
{
int currrent_ar = *ar + 1;
int width = 0;
while (format[currrent_ar] != '\0')
{
if (is_digit(format[currrent_ar]))
{
width = width * 10;
width = width + format[currrent_ar] - '0';
}
else if (format[currrent_ar] == '*')
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
*ar = currrent_ar - 1;
return (width);
}
