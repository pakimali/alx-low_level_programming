#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 * Program that prints all possible combos of single-digit numbers.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + 48);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
