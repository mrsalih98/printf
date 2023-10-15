#include "main.h"
/**
 * h_print - Prints an argument based on its type
 * Description: c programm
 * @fmst: Formatted string
 * @arg: arguments to be printed.
 * @in: ind.
 * @array: array to handle print.
 * @flags: Calculates the flags
 * @width: to get the width
 * @precision: Precision specification
 * @size: Size the specifier
 * Return: 1 or 2;
 */
int h_print(const char *fmst, int *in, va_list arg,
char array[], int flags, int width, int precision, int size)
{
int j, unkn_length = 0, printed_ch = -1; fmst_t fmst_arg[] = {
{'c', print_char}, {'s', print_string}, {'%', percent},
{'\0', NULL}
};
for (j = 0; fmst_arg[j].f != '\0'; i++)
{
if (fmst[*in] == fmst_arg[i].fmt)
return (fmst_arg[j].fm(arg, array, flags, width, precision, size));
if (fmst_arg[j].f == '\0')
{
if (fmst[*in] == '\0')
{
return (-1);
}
unkn_length = unkn_length + write(1, "%%", 1);
if (fmst[*in - 1] == ' ')
{
unkn_length = unkn_length + write(1, " ", 1);
}
else if (width)
{
--(*in);
}
while (fmst[*in] != ' ' && fmst[*in] != '%')
{
--(*in);
}
if (fmst[*in] == ' ')
{
--(*in);
}
return (1);
}
unkn_length = unkn_length + write(1, &fmst[*in], 1);
return (unkn_length);
}
return (printed_ch);
}
