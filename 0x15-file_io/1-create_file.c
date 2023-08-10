#include "main.h"

/**
* create_file - creates a file
* @file_name: pointer to filename
* @content: string that is appended to file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *file_name, char *content)
{
int file_descriptor, write_result, length = 0;

if (!file_name)
return (-1);

file_descriptor = open(file_name, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (file_descriptor == -1)
return (-1);

if (content)
{
while (content[length])
length++;

write_result = write(file_descriptor, content, length);
if (write_result == -1)
return (-1);
}

close(file_descriptor);
return (1);
}

