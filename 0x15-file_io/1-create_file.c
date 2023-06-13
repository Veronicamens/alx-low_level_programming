#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_file - Creates a file
* @filename: Pointer to the filename
* @text_content: String that is appended to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, w, len = 0;

if (!filename)
return (-1);

fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content)
{
while (text_content[len])
len++;

w = write(fd, text_content, len);
if (w == -1)
return (-1);
}

close(fd);
return (1);
}
