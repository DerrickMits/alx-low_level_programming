#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit, temp;
last_digit = 0;
temp = n;
if (temp < 0)
temp = -temp;
while (temp > 0)
{
last_digit = temp % 10;
temp /= 10;
}
return (last_digit);
}
