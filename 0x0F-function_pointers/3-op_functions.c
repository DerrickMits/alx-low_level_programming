#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
(void)b;
return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a minus b.
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a divided by b.
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Modulus remainder of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: Modulus remander
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
