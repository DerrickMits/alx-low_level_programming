#include <stdio.h>

/*
 * main - The sum of the even-valued terms
 * Return: 0 (Success)
 */
int main(void) 
{
int limit = 4000000;
int sum = 0;
int a = 1;
int b = 2;
while (a <= limit)
{
if (a % 2 == 0)
{
sum += a;
}
int temp = a + b;
a = b;
b = temp;
}
printf("%d\n", sum);
return (0);
}
