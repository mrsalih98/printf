#include "main.h"
/**
 * write_unsignd - function that Writes an unsigned number
 * @is_negative: to indicating if the number is negative
 * @index: Index which the number starts in the array
 * @array: Array of characters
 * @flags: Flags specifiers
 * @width: Width specifier
 * @precision: Precision specifier
 * @size: Size specifier
 *
 * Return: Number of written characters.
 */
int write_unsignd(int is_negative, int index,
char array[], int flags, int width, int precision, int size)
{int len = ARR_SIZE - index - 1, j = 0;
char pad = ' ';
UNUSED(is_negative);
UNUSED(size);
if (precision == 0 && index == ARR_SIZE - 2 && array[index] == '0')
{ return (0); } 
if (precision > 0 && precision < len)
{ pad = ' '; }
while (precision > len)
{ array[--index] = '0';
len++; }
if ((flags & FLAGS_ZERO) && !(flags & FLAGS_MINUS))
{ pad = '0'; }
if (width > len)
{
for (j = 0; j < width - len; j++)
{ array[j] = pad; }
array[j] = '\0';
if (flags & FLAGS_MINUS) 
{
return (write(1, &array[index], len) + write(1, &array[0], j)); }
else 
{
return (write(1, &array[0], j) + write(1, &array[index], len)); }
}
return (write(1, &array[index], len)); }
