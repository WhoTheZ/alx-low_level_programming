#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
int i;
char a;
for (i = 0 ; i < 10 ; i++)
putchar(i + '0');
for (a = 'b' ; a <= 'f' ; i++)
putchar(a);
putchar('\n');
return (0);
}
