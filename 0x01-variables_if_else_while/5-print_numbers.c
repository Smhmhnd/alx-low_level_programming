#include <stdio.h>

/**
 * main - Print "numbers less than 10"
 *
 * retun: 0 (success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i);
i++;
}
i++;
putchar('\n');
return (0);
}
