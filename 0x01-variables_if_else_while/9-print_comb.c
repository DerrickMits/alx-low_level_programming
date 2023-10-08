#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (int i = '0'; i <= '9'; i++)
{
putchar(i);
if (i != i < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
