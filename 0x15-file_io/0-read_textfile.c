#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints(POSIX standard output)
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         0 if the file can't be opened or read, or if filename is NULL,
 *         or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int r;
ssize_t bytes_read, bytes_written;
char *buffer;
if (filename == NULL)
return (0);
r = open(filename, O_RDONLY);
if (r == -1)
return (0);
buffer = malloc(letters);
if (buffer == NULL)
{
close(r);
return (0);
}
bytes_read = read(r, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(r);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
free(buffer);
close(r);
if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
return (0);
return (bytes_written);
}
