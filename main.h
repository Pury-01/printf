#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
void c_handler(va_list args);
void s_handler(va_list args);
void(*get_func(char specifier))(va_list args);
void i_handler(va_list args);
void d_handler(va_list args);

#endif /* MAIN_H */
