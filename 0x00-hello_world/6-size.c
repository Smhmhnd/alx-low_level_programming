#include <stdio.h>

/**
 * main-Printing size of data types
 * return Always 0 (Success)
 */
int main(void)
{
int i;
char c;
long int l;
long long int b;
float f;
printf("size of a char: %d byte(s)\n", sizeof(c));
printf("size of an int: %d byte(s) \n", sizeof(i));
printf("size of a long int: %d byte(s) \n", sizeof(l));
printf("size of a long long int: %d byte(s) \n", sizeof(b));
printf("size of a float: %d byte(s) \n", sizeof(f));

return (0);
}
