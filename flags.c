#include "main.h"
/**
 * get_flags - function that Calculates flags
 * Description: c programm
 * @format: Formatted string
 * @ar: take a parameter.
 * Return: Flags
 */
int get_flags(const char *format, int *ar)
{
int p;
int current_ar;
int flags = 0;
const char FLAGS_CHARACTER[] = {'-', '+', '0', '#', ' ', '\0'};
const int FLAGS_ARRAY[] = {FLAGS_MINUS, FLAGS_PLUS,
FLAGS_ZERO, FLAGS_HASH, FLAGS_SPACE, 0};
for (current_ar = *ar + 1; format[current_ar] != '\0'; current_ar++)
{
for (p = 0; FLAGS_CHARACTER[p] != '\0'; p++)
{
if (format[current_ar] == FLAGS_CHARACTER[p])
{
flags |= FLAGS_ARRAY[p];
break;
}
}
if (FLAGS_CHARACTER[p] == 0)
{
break;
}
}
*ar = current_ar - 1;
return (flags);
}
