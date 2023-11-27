#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define STDERROR_FILENO 2

/**
 * error_file - Opens the files and checks errors
 * @file_from: Initial file to copy
 * @file_to: The place to copy to
 * @argv: The command-line arguments
 * This function checks for errors when opening files and exits if necessary.
 */
void error_file(int file_from, int file_to, char *argv)
{
if (file_from == -1)
{
dprintf(STDERROR_FILENO, "Error: Can't read from file %s\n", argv);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERROR_FILENO, "Error: Can't write to %s\n", argv);
exit(99);
}
}

/**
 * main - Copies the content of the file
 * @argc: Counts the number of arguments
 * @argv: Vector argument
 * This function copies the content of one file to another
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int file_from, file_to, e_close;
ssize_t ch, wr;
char buf[1024];
if (argc != 3)
{
dprintf(STDERROR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND, 0664);
error_file(file_from, file_to, argv[1]);
ch = 1024;
while (ch == 1024)
{
ch = read(file_from, buf, 1024);
if (ch == -1)
error_file(-1, 0, argv[1]);
wr = write(file_to, buf, 1024);
if (wr == -1)
error_file(0, -1, argv[2]);
}
e_close = close(file_from);
if (e_close == -1)
{
dprintf(STDERROR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
e_close = close(file_to);
if (e_close == -1)
{
dprintf(STDERROR_FILENO, "Error: Can't close fd %d\n", file_to);
}
return (0);
}
