#include <stdio>
/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by new line, using the only the putchar function and
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;
	char letter;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	for (letter = 'a' letter <= 'f'; letter++)
		putchar (letter);
	putchar('\n');
	return (0);
}