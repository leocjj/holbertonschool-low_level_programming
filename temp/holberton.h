#ifndef HOLBERTON_H_INCLUDED
#define HOLBERTON_H_INCLUDED
#include <stdarg.h>
int _printf(const char *format, ...);
char *checkformat(char **str, va_list args);
char *concatenate(const char *s1, const char *s2);

#endif
