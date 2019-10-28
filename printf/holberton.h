#ifndef HOLBERTON_H_INCLUDED
#define HOLBERTON_H_INCLUDED
#include <stdarg.h>
#define buffer_size 1024

int _printf(const char *format, ...);
char *checkformat(char *str, va_list args);
int count_id(const char *count1);

int size_temp(char *temp_s);
void free_temp(char *temp_s);
void concat_c(char *buffer, va_list args, int *chars_printed);
int concat(char *s1, char *s2, int *chars_printed);

#endif
