#include "main.h"
/**
 * is_printable - determine if character is printable
 * @p: Character to be evaluated
 * Return: 1 if p is printable, 0 otherwise
 */
int is_printable(char m)
{
if (m >= 32 && m < 127)
{ return (1); }
return (0);
}
/**
 * append_hexadecimal_code - function that Append ascci 
 * in hexadecimal code to array
 * @array: Array of chars
 * @index: index at which to start appending
 * @asc_code: ASSCI CODE
 * Return: Always 3
 */
int append_hexadecimal_code(char asc_code, char array[], int p)
{
char mapp_to[] = "0123456789ABCDEF";
if (asc_code < 0)
{ asc_code *= -1; }
array[p++] = '\\';
array[p++] = 'x';
array[p++] = mapp_to[asc_code / 16];
array[p] = mapp_to[asc_code % 16];
return (3);
}
