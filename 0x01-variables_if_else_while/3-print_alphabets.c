#include <stdio.h>

/**
 * main-Printing alPhabets
 * retuns 0 (success)
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
