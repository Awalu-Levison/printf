#ifndef MAIN_H
#define MAIN_H


/*Standard header files*/
#include <stdarg.h>
#include <unistd.h>

/*User defined prototypes*/
int _printf(const char *format, ...);
int len_str(char *mystr);
int handle_format(const char *format, va_list mylist);
int char_print(char z);
int length_str(char *mystr);
int str_print(char *mystr);
int get_int(int num);


#endif
