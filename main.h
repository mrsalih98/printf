#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#define ARR_SIZE 1024
/* Flags */
#define FLAGS_MINUS 1
#define FLAGS_PLUS 2
#define FLAGS_ZERO 4
#define FLAGS_HASH 8
#define FLAGS_SPACE 16
/* Sizes */
#define S_LONG 2
#define S_SHORT 1
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/**
 * struct fmst - Struct 
 * Description: c programm
 * @fmst: The format.
 * @fm: The function associated.
 */
struct fmst
{
char fmst;
int (*fm)(va_list, char[], int, int, int, int);
};
/**
 * typedef struct fmst fmst_t - Struct 
 * @fmst: format.
 * @fms_t: function associated
 */
typedef struct fmst fmst_t;
int _printf(const char *format, ...);
int h_print(const char *fmst, int *ar,
va_list arg, char array[], int flags, int width, int precision, int size);

int print_character(va_list arg, char array[],
int flags, int width, int precision, int size);
int print_string(va_list arg, char array[],
int flags, int width, int precision, int size);
int print_percent(va_list arg, char array[],
int flags, int width, int precision, int size);
int is_digit(char c);
int handle_write_char(char c, char array[], int flags, int width, int precision, int size);
int get_flags(const char *format, int *ar);
int get_width(const char *format, int *ar, va_list arg);
int get_precision(const char *format, int *ar, va_list arg);
int get_size(const char *format, int *ar);

int print_int(va_list args ) ;
int print_deci(va_list args ) ;
int pr_non_printable(va_list arg, char array[],
int flags, int width, int precision, int size);
int is_printable(char m);
int append_hexadecimal_code(char asc_code, char array[], int p);
int print_rot13_string(va_list arg, char array[],
int flags, int width, int precision, int size);

int print_binary(va_list arg, char array[],
int flags, int width, int precision, int size);
int print_int ( va_list args ) ;
int print_deci (va_list args ) ;
int print_reverse(va_list arg, char array[],
int flags, int width, int precision, int size);
int print_unsigned(va_list types, char array[],
        int flags, int width, int precision, int size);

long int conv_size_unsgnd(unsigned long int numb, int size);

int write_unsignd(int is_negative, int index,
char array[], int flags, int width, int precision, int size);

int pri_hexa(va_list arg, char mapp_to[], char array[],
int flags, char flag_chara, int width, int precision, int size);

int pri_hexa_upper(va_list arg, char array[],
int flags, int width, int precision, int size);

int pri_hexadecimal(va_list arg, char array[],
int flags, int width, int precision, int size);

int pri_octal(va_list arg, char array[],
int flags, int width, int precision, int size);

int pri_unsigned(va_list arg, char array[],
int flags, int width, int precision, int size);

#define UNUSED(x) (void)(x)
#endif
