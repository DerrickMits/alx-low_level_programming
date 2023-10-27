#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum change to be received
 * @argc: argument of count
 * @argv: argument of vector
 * Return: If the number is not one id -1 or otherwise 0
 */
int main(int argc, char *argv[])
{
int c, co = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
c = atoi(argv[1]);
while (c > 0)
{
co++;
if ((c - 25) >= 0)
{
c -= 25;
continue;
}
if ((c - 10) >= 0)
{
c -= 10;
continue;
}
if ((c - 5) >= 0)
{
c -= 5;
continue;
}
if ((c - 2) >= 0)
{
c -= 2;
continue;
}
c--;
}
printf("%d\n", co);
return (0);
}
