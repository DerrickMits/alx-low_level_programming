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
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit = abs(n % 10); // Calculate the absolute value of the last digit
printf("Last digit of %d is %d%d and is", n, (n < 0 ? -1 : 1), lastDigit);
if (lastDigit > 5)
{
printf("greater than 5\n");
}
else if (lastDigit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
