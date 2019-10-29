#ifndef HOLBERTON_H_INCLUDED
#define HOLBERTON_H_INCLUDED
#include <stdarg.h>
#define buffer_size 2100

int _printf(const char *format, ...);
char *checkformat(char *str, va_list args);
int count_id(const char *count1);

int size_temp(char *temp_s);
void free_temp(char *temp_s);
int concat_c(char *buffer, int character, int *chars_printed);
int concat(char *buffer, char *s2, int *chars_printed);
int concat_i(char *buffer, int integer, int *chars_printed);
int concat_b(char *buffer, unsigned int integer, int *chars_printed);
int concat_l(char *buffer, long double integer, int *chars_printed);
char *concat_s(char *s1, char *s2);
char *reverse_string(char *string);
char *rot13(char *string);
int concat_u(char *buffer, unsigned int integer, int *chars_printed);

#endif
