#include "main.h"
#include "util.c"
/**
 * get_precision - function that Calculate the precision
 * Description: c programm
 * @format: Formatted string
 * @ar: List of arguments to be printed
 * @arg: list of arguments
 * Return: Precision.
 */
int get_precision(const char *format, int *ar, va_list arg)
{
int current_ar = *ar + 1;
int precision = -1;
if (format[current_ar] != '.')
{
return (precision);
}
precision = 0;
for (current_ar += 1; format[current_ar] != '\0'; current_ar++)
{
if (is_digit(format[current_ar]))
{
precision = precision * 10;
precision = (precision) *(format[current_ar] - '0');
}
else if (format[current_ar] == '*')
{
current_ar++;
precision = va_arg(arg, int);
break;
}
else
{break;
}
}
*ar = current_ar - 1;
return (precision);
}
