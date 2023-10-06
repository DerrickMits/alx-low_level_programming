#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determimes if a number is postive, negative or zero
 * Return: 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The number %d is ", n);
if (n > 0)
{
printf("positive\n", n);
}
else if (n == 0)
{
printf("zero\n", n);
}
else
{
printf("negative\n" ,n);
}
return (0);
}
