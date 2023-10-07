#include <stdio.h>
/**
 * main - program that prints all the numbers
 * Return: 0 (Success)
 */
int main(void)
{
char hexDigits[] = "0123456789abcdef";
for (int i = 0; i < 16; i++)
{
putchar(hexDigits[i]);
}
putchar('\n');
return (0);
}
