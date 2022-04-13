#include "main.h"

/**
 * print_alphabet - prints in lowercase
 */
void print_alphabet(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	
	putchar('\n');
}
