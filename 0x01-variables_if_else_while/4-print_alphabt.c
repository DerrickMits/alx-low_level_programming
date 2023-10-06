#include <stdio.h>
/**
 * main - Exclude some letters
 * Return: 0 (success)
 */
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar("\n");
}
n++;
return (0);
}
