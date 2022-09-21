#include <stdio.h>

/**
 * main - print "alphabets except q and e"
 *
 * return: 0 (success)
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
continue;
putchar(i);
}
putchar('\n');
return (0);
}
