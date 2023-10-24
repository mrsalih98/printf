#include "main.h"
/**
 * pri_unsigned - function that Prints  unsigned number
 * @arg: List a of arguments
 * @array: array to handle print
 * @flags:  Calculates flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed.
 */
int pri_unsigned(va_list arg, char array[],
int flags, int width, int precision, int size)
{ int j = ARR_SIZE - 2;
unsigned long int numb = va_arg(arg, unsigned long int);
numb = conv_size_unsgnd(numb, size);
if (numb == 0)
{ array[j--] = '0'; }
array[ARR_SIZE - 1] = '\0';
while (numb > 0)
{ array[j--] = (numb % 10) + '0';
numb /= 10; }
j++;
return (write_unsignd(0, j, array, flags, width, precision, size)); }


/**
 * pri_octal - function that Prints an unsigned number in octal notation
 * @arg: Lista of arguments
 * @array: array to handle print
 * @flags:  Calculates flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int print_octal(va_list arg, char array[],
int flags, int width, int precision, int size)
{ int j = ARR_SIZE - 2;
unsigned long int numb = va_arg(arg, unsigned long int);
unsigned long int init_numb = numb;
UNUSED(width);
numb = conv_size_unsgnd(numb, size);
if (numb == 0)
{ array[j--] = '0'; }
array[ARR_SIZE - 1] = '\0';
while (numb > 0)
{ array[j--] = (numb % 8) + '0';
numb /= 8; }
if (flags & FLAGS_HASH && init_numb != 0)
{ array[j--] = '0'; }
j++;
return (write_unsignd(0, j, array, flags, width, precision, size));
k}

/**
 * pri_hexadecimal - function that Prints unsigned
 * number in hexadecimal notation
 * @arg: Lista of arguments
 * @array: array to handle print
 * @flags:  Calculates flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int pri_hexadecimal(va_list arg, char array[],
int flags, int width, int precision, int size)
{
return (pri_hexa(arg, "0123456789abcdef", array,
flags, 'x', width, precision, size));
}


/**
 * pri_hexa_upper - function that Prints unsigned
 * number in upper hexadecimal notation
 * @arg: Lista of arguments
 * @array: array to handle print
 * @flags:  Calculates flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int pri_hexa_upper(va_list arg, char array[],
int flags, int width, int precision, int size)
{
return (pri_hexa(arg, "0123456789ABCDEF", array,
flags, 'X', width, precision, size)); }


/**
 * pri_hexa - function that Prints a hexadecimal number in lower or upper
 * @arg: Lista of arguments
 * @mapp_to: Array of values to mapp the number to
 * @array: array to handle print
 * @flags:  Calculates flags
 * @flag_chara: Calculates flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * @size: Size specification
 * Return: Number of characters printed
 */
int pri_hexa(va_list arg, char mapp_to[], char array[],
int flags, char flag_chara, int width, int precision, int size)
{ int j = ARR_SIZE - 2;
unsigned long int numb = va_arg(arg, unsigned long int);
unsigned long int initi_numb = numb;
UNUSED(width);
numb = conv_size_unsgnd(numb, size);
if (numb == 0)
{ array[j--] = '0'; }
array[ARR_SIZE - 1] = '\0';
while (numb > 0)
{ array[j--] = mapp_to[numb % 16];
numb /= 16; }
if (flags & FLAGS_HASH && initi_numb != 0)
{ array[j--] = flag_chara;
array[j--] = '0'; }
j++;
return (write_unsignd(0, j, array, flags, width, precision, size)); }
