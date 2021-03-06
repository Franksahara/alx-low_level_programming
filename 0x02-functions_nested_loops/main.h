#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar - writes the character c to stdio
 * @c: The character to print
 *
 * Return: O success 1.
 * On error, -1 is returned, and eror is set appropriately.
 */

int _putchar(char c);

/**
 * prints_alphabet - -print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - print lowercase alphabets ten times
 */

void print_alphabet_x10(void);
/**
 * _islower - checks for lowercase
 * @c: the character to check
 * Return: it
 *
 */

int _islower(int c);
/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase 0 if not alphabet character
 */

int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);


void jack_bauer(void);

void times_table(void);

int add(int a, int b);

void print_to_98(int n);

void print_times_table(int n);


#endif
