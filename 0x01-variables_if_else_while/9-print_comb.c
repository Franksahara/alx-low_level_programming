#include <stdio.h>
/**
 * main - prints numbers from 00 to 99 separated by comma and space
 * printed in ascending order and using only putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = o; digit <= 9; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
