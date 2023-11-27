#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
FILE *file;
if (filename == NULL)
return (-1);
file = fopen(filename, "w");
if (file == NULL)
return (-1);
if (text_content != NULL)
{
if (fputs(text_content, file) == EOF)
{
fclose(file);
return (-1);
}
}
if (fclose(file) != 0)
return (-1);
return (1);
}
