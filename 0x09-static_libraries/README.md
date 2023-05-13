Static Library
This project contains a static library called libmy.a. It contains the
following functions:
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
If any of the functions have not been implemented, empty functions with the
correct prototype have been provided.
Script
This project also includes a script called create_static_lib.sh. This script
creates a static library called liball.a from all the .c files in the current
directory. The contents of the script are:
#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
This script compiles all the .c files in the current directory using the GCC
compiler with specific flags, creates an archive file called liball.a using
the ar command, and finally indexes the archive using the ranlib command.
