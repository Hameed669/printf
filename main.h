#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#define UNUSED(x) (void)(x)
#define BUF_SIZE 1024

/**
 * struct specifier_s - struct to store specifier information
 * @specifier: the specifier character
 * @print_func: pointer to the corresponding print function
 */

typedef struct specifier_s
{
	char specifier;
	void (*print_func)(va_list, int *, char *);
} specifier_t;

void handle_specifier(char specifier, va_list args, int *count, char buffer[]);
void print_hex(va_list args, int *count, char buffer[]);
void print_hex_upper(va_list args, int *count, char buffer[]);
void print_unsigned(va_list args, int *count, char buffer[]);
void print_octal(va_list args, int *count, char buffer[]);
void print_string(va_list args, int *count, char buffer[]);
void print_char(va_list args, int *count, char buffer[]);
void print_percent(va_list args, int  *count, char buffer[]);
int _printf(const char *format, ...);
void print_integer(va_list args, int *count, char buffer[]);
void print_binary(va_list args, int *count, char buffer[]);
void print_S(va_list args, int *count, char *buffer);
void check_format(const char *format, va_list args, int *count, char buffer[]);
#endif 
