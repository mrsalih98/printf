#include "main.h"
/**
 * get_size - function that Calculate the size
 * Description: c programm
 * @format: Formatted string
 * @ar: List of arguments to be printed
 * Return: size
 */
int get_size(const char *format, int *ar)
{
int current_ar = *ar + 1;
int size = 0;
if (format[current_ar] == 'l')
{
size = S_LONG;
}
else if (format[current_ar] == 'h')
{
size = S_SHORT;
}
if (size == 0)
{
*ar = current_ar - 1;
}
else
{
*ar = current_ar;
}
return (size);
}
