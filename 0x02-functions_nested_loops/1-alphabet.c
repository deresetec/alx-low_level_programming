#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * return - void
 */
void print_alphabet(void)
{
char c;

c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
