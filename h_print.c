#include "main.h"

/**
 * h_print - Prints an argument based on its type
 * Description: c programm
 * @fmst: Formatted string
 * @arg: arguments to be printed
 * @in: ind
 * @array: array to handle print
 * @flags: Calculates the flags
 * @width: to get the width
 * @precision: Precision specification
 * @size: Size the specifier
 * Return: printed character
 */
int h_print(const char *fmst, int *in, va_list arg,
char array[], int flags, int width, int precision, int size)
{
int j, unkn_length = 0, printed_ch = -1;
fmst_t fmst_arg[] = {
{'c', print_character}, {'s', print_string}, {'%', print_percent},
{'b', print_binary}, {'S', pr_non_printable}, {'r', print_reverse},
{'R', print_rot13_string}, {'\0', NULL}
};
for (j = 0; fmst_arg[j].fmst != '\0'; j++)
{
if (fmst[*in] == fmst_arg[j].fmst)
return (fmst_arg[j].fm(arg, array, flags, width, precision, size));
}
if (fmst_arg[j].fmst == '\0')
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
