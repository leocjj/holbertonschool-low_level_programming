#ifndef HOLBERTON_H_INCLUDED
#define HOLBERTON_H_INCLUDED
#include <stdarg.h>
#define buffer_size 1024

int _printf(const char *format, ...);
char *checkformat(char *str, va_list args);
int count_id(const char *count1);

int size_temp(char *temp_s);
void free_temp(char *temp_s);
int concat_c(char *buffer, int character, int *chars_printed);
int concat(char *buffer, char *s2, int *chars_printed);
int concat_i(char *buffer, int integer, int *chars_printed);
int concat_b(char *buffer, unsigned int integer, int *chars_printed);
int concat_l(char *buffer, unsigned long int integer, int *chars_printed);

#endif
