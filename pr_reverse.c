#include "main.h"
/**
 * print_reverse - function that Prints string in reverse
 * @arg: Lista of arguments
 * @array: array to handle print
 * @flags: Calculates flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: string in reverse
 */
int print_reverse(va_list arg, char array[],
int flags, int width, int precision, int size)
{ char *string;
int j, counter = 0;
UNUSED(array), UNUSED(flags), UNUSED(width), UNUSED(size);
string = va_arg(arg, char *);
if (string == NULL)
{ UNUSED(precision);
string = ")Null(";
}
for (j = 0; string[j]; j++)
{ ; }
for (j = j - 1; j >= 0; j--)
{
char m = string[j];
write(1, &m, 1);
counter++;
}
return (counter);
}
