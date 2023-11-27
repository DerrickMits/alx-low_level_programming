#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * openFile - Opens a file and handles errors if any.
 * @filename: The name of the file to open.
 * @flags: The flags to use when opening the file.
 * @mode: The mode to use when creating the file (if applicable).
 *
 * Return: The file descriptor on success, or exits the program on failure.
 */
int openFile(const char *filename, int flags, mode_t mode);

/**
 * closeFile - Closes a file and handles errors if any.
 * @fd: The file descriptor to close.
 * @filename: The name of the file associated with the file descriptor.
 */
void closeFile(int fd, const char *filename);

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array containing the arguments.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */
int main(int argc, char *argv[])
{
int ffrom, fto, r, w;
if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
ffrom = openFile(argv[1], O_RDONLY, 0);
fto = openFile(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
do {
char buffer[BUFFER_SIZE];
r = read(ffrom, buffer, BUFFER_SIZE);
if (r == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
closeFile(ffrom, argv[1]);
closeFile(fto, argv[2]);
exit(98);
}
w = write(fto, buffer, r);
if (w == -1 || w != r)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
closeFile(ffrom, argv[1]);
closeFile(fto, argv[2]);
exit(99);
}
} while (r > 0);
closeFile(ffrom, argv[1]);
closeFile(fto, argv[2]);
return (0);
}


/**
 * openFile - Opens a file and handles errors if any.
 * @filename: The name of the file to open.
 * @flags: The flags to use when opening the file.
 * @mode: The mode to use when creating the file (if applicable).
 *
 * Return: The file descriptor on success, or exits the program on failure.
 */

int openFile(const char *filename, int flags, mode_t mode)
{
int fd = open(filename, flags, mode);
if (fd == -1)
{
dprintf(2, "Error: Can't open file %s\n", filename);
exit(98);
}
return (fd);
}

/**
 * closeFile - Closes a file and handles errors if any.
 * @fd: The file descriptor to close.
 * @filename: The name of the file associated with the file descriptor.
 */

void closeFile(int fd, const char *filename)
{
if (close(fd) == -1)
{
dprintf(2, "Error: Can't close fd %d for file %s\n", fd, filename);
exit(100);
}
}
