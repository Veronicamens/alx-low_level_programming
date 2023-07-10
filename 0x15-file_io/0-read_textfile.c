#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Reads a text file and prints it to POSIX stdout.
* @filename: A pointer to the name of the file.
* @max_bytes: The maximum number of bytes the
*             function should read and print.
*
* Return: If the function fails or filename is NULL - 0.
*         O/w - the actual number of bytes the function can read and print.
*/
ssize_t read_textfile(const char *filename, size_t max_bytes)
{
ssize_t file_descriptor, bytes_read, bytes_written;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * max_bytes);
if (buffer == NULL)
return (0);

file_descriptor = open(filename, O_RDONLY);
bytes_read = read(file_descriptor, buffer, max_bytes);
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

if (file_descriptor == -1 || bytes_read == -1 || bytes_written == -1
|| bytes_written != bytes_read)
{
free(buffer);
return (0);
}

free(buffer);
close(file_descriptor);

return (bytes_written);
}
