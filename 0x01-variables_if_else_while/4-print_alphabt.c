#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * Program that prints the alphabet in lowercase except letters e and q.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
