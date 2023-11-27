#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array containing the arguments.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */
int main(int argc, char *argv[])
{
int ffrom, fto, r, w, close_fd;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
ffrom = open(argv[1], O_RDONLY);
if (ffrom == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
if (fto == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(ffrom);
exit(99);
}
do
{
r = read(ffrom, buffer, BUFFER_SIZE);
if (r == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
close(ffrom);
close(fto);
exit(98);
}
w = write(fto, buffer, r);
if (w == -1 || w != r)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(ffrom);
close(fto);
exit(99);
}
}
while (r > 0);
close_fd = close(ffrom);
if (close_fd == -1)
{
dprintf(2, "Error: Can't close fd %d\n", ffrom);
exit(100);
}
close_fd = close(fto);
if (close_fd == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fto);
exit(100);
}
return (0);
}
