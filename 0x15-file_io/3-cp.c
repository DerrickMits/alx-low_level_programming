#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define STDERROR_FILENO 2

/**
 * error_file - Ensures the successful opening of files and handles errors.
 * @file_from: File descriptor for the source file.
 * @file_to: File descriptor for the destination file.
 * @argv: Array of command-line arguments.
 *
 * This function checks if the source file can be read and if the destination
 * file can be written to. If any issues are encountered, it prints an error
 * message to standard error and exits the program
 */
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
 * main - Copies content from one file to another.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: Always returns 0.
 *
 * This program checks if the correct number of command-line arguments is
 * provided (two file names). It opens the source file for reading and the
 * destination file for writing. It reads data from the source file in chunks
 * and writes it to the destination file until the entire content is copied.
 * The program then closes both files and exits with the appropriate status
 * codes in case of errors during the process.
 */
int main(int argc, char *argv[])
{
int ffrom, fto, e_close;
ssize_t ch, wr;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
ffrom = open(argv[1], O_RDONLY);
fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(ffrom, fto, argv);
ch = 1024;
while (ch == 1024)
{
ch = read(ffrom, buf, 1024);
if (ch == -1)
error_file(-1, 0, argv);
wr = write(fto, buf, ch);
if (wr == -1)
error_file(0, -1, argv);
}
e_close = close(ffrom);
if (e_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom);
exit(100);
}
e_close = close(fto);
if (e_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom);
exit(100);
}
return (0);
}
