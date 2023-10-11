#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
long long int a = 1, b = 2, next, i;
printf("%lld, %lld", a, b);
for (i = 3; i <= 50; i++)
{
next = a + b;
printf(", %lld", next);
a = b;
b = next;
}
printf("\n");
return (0);
}
