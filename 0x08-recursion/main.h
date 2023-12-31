#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * void prototypes(void)
 * int prototypes(int)
 * char prototypes(char)
 */
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
int helper_palindrome(char *s, int len);
int wildcmp_recursive(char *s1, char *s2);
int _putchar(char c);
int _sqrt(int n, int x);
int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_prime(int n, int start);

#endif /*MAIN_H */
