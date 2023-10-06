#include <stdio.h>
/**
 * main -  prints all single digit numbers of base
 * Return: 0 (Success)
 */
int main(void)
{
char digit = '0';
while (digit <= '9')
{
putchar(digit);
digit++;
}
putchar('\n');
return 0;
}

