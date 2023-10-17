#include "main.h"
/**
 * print_binary - function that convert unsigned integer number to binary
 * @arg: Lista of arguments
 * @array: array to handle print
 * @flags:  Calculates flags
 * @width: get the width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Numbers of character printed.
 */
int print_binary(va_list arg, char array[],
int flags, int width, int precision, int size)
{ unsigned int p, k, j, summ, d[32];
int counter;
UNUSED(array), UNUSED(flags), UNUSED(width), UNUSED(precision);
UNUSED(size);
p = va_arg(arg, unsigned int);
k = 2147483648;
d[0] = p / k;
for (j = 1; j < 32; j++)
{ k /= 2;
d[j] = (p / k) % 2;
}
for (j = 0, summ = 0, counter = 0; j < 32; j++)
{ summ = summ + d[j];
if (summ || j == 31)
{
char m = '0' + d[j];
write(1, &m, 1);
counter++;
}
}
return (counter);
}
