#ifndef HOLBERTON_H_INCLUDED
#define HOLBERTON_H_INCLUDED
#include <stdarg.h>
int _printf(const char *format, ...);
char *checkformat(char **str, va_list args);
char *concatenate(char *s1, char *s2);
int count_id(char *count1);

#endif // HOLBERTON_H_INCLUDED
