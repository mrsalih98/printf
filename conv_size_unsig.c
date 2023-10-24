#include "main.h"
/**
 * conv_size_unsgnd - function that Casts number to the specified size
 * @numb: Number to be casted
 * @size: Number indicating the type to be casted
 * Return: the Casted value of number
 */
long int conv_size_unsgnd(unsigned long int numb, int size)
{
if (size == S_LONG)
{ return (numb); }
else if (size == S_SHORT)
{ return ((unsigned short)numb); }
return ((unsigned int)numb);
}
