#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = abs(n % 10)
if (ld > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, (n < 0 ? -1 : 1), ld);
}
else if (ld == 0)
{
printf("Last digit of %d is %d and is 0\n", n, (n < 0 ? -1 : 1), ld);
}
else
{
printf("Last digit of %d is %d and and is less than 6 and not 0\n", n, (n < 0 ? -1 : 1), ld);
}
return (0);
