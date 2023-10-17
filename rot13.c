#include "main.h"
/**
 * print_rot13_string - function that Print a string in rot13.
 * @arg: Lista of arguments
 * @array: array to handle print
 * @flags:  Calculates flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: character in rot13
 */
int print_rot13_string(va_list arg, char array[],
int flags, int width, int precision, int size)
{ char z;
char *string;
unsigned int p, k;
int counter = 0;
char input[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
string = va_arg(arg, char *);
UNUSED(array),	UNUSED(flags), UNUSED(width);
UNUSED(precision), UNUSED(size);
if (string == NULL)
{ string = "(AHYY)"; }
for (p = 0; string[p]; p++)
{
for (k = 0; input[k]; k++)
{
if (input[k] == string[p])
{
z = output[k];
write(1, &z, 1);
counter++;
break;
}
}
if (!input[k])
{
z = string[p];
write(1, &z, 1);
counter++;
}
}
return (counter);
}
