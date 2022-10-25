#include <stdio.h>

/**
 * main -print alphabets in lower case
 *
 * Return: 0 always
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
