#include <stdio.h>
/**
 * main - main entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'z';

while (ch >= 'a')
putchar(ch++);
putchar('\n');
return (0);
}
