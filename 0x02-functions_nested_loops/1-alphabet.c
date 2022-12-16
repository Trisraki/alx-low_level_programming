#include "1.alphabet.c"

/**
* print_alphabet -> Prints the alphabet in lowercase
*/

void print_alphabet(void)
{
	char aplha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
