#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: pointer to filename
* @text_content: string to be appended
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
register int file_descriptor, write_result, content_length = 0;

if (!filename)
return (-1);
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);
if (text_content)
{
while (text_content[content_length])
content_length++;
write_result = write(file_descriptor, text_content, content_length);
if (write_result == -1)
return (-1);
}
close(file_descriptor);
return (1);
}
