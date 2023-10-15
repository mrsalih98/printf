#include "main.h"
/** is_digit -function that determine if a char is a digit
 * Description: c programm
 * @c: Char to be evaluated
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}

