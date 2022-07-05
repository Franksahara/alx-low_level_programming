#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _puchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error -1 is returned, and error is set appropriately.
 */

int _puchar(char c);

/**
 *print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - prit lowercase alphabet ten times
 */

void print_alphabet_x10(void);
/**
 * islower - checks for lowercase
 * @c: the character to check
 * Return: int
 *
 */

int _islower(int c);
/**
 * isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */
