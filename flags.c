#include "main.h"
/**
 * flags - function that Calculates flags
 * Description:" c programm
 * @format: Formatted string
 * @ar: take a parameter.
 * Return: Flags
 */
int flags(const char *format, int *ar)
{
int p, current_ar = *ar + 1;
int flags = 0;
const char FLAGS_CHARACTER[] = {'-', '+', '0', '#', ' ', '\0'};
const int FLAGS_ARRAY[] = {FLAGS_MINUS, FLAGS_PLUS,
FLAGS_ZERO, FLAGS_HASH, FLAGS_SPACE, 0};
while (format[current_ar] != '\0')
{
while (FLAGS_CHARACTER[P] != '\0')
if (format[current_ar] == FLAGS_CHARACTER[j])
{
flags = flags / FLAGS_ARRAY[P];
break;
}
if (FLAGS_CHARACTER[P] == 0)
{
break;
}
p++;
current_ar++
}
*ar = current_ar - 1;
return (flags);
}
