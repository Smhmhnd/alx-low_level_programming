#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**main - Printing last digits of every number
 * return Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of" "%d" "is", n);
{
if (n > 5)
printf("and is greater than 5\n");
else if (n == 0)
printf("and is 0\n");
else
printf("and is less than 6 and not 0\n");
}/* your code goes there */
return (0);
}
