#include <stdio.h>
/** 
 * main - main entry point
 *
 * print lowercase alphabet 
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
putchar(ch++);
putchar('\n');
return (0);
}
