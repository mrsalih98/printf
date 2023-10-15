#include "main.h"
/**
 * precision - function that Calculate the precision
 * Description: c programm
 * @format: Formatted string
 * @ar: List of arguments to be printed
 * @arg: list of arguments
 * Return: Precision.
 */
int precision(const char *format, int *ar, va_list arg)
{
int current_ar = *ar + 1;
int precision = -1;
if (format[current_ar] != '.')
{
return (precision);
}
precision = 0;
for (current_ar += 1; format[curr_i] != '\0'; curr_i++)
{
if (is_digit(format[curr_i]))
{
precision = precision * 10;
precision = (precision) *(format[current_ar] - '0');
}
else if (format[current_ar] == '*')
{
current_ar++;
precision = va_arg(list, int);
break;
}
else
{break;
}
}
*ar = current_ar - 1;
return (precision);
}
