#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: text file
 * @text_content: ponter
 * Return: 1 on success and-1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fi, wi, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (; text_content[len];)
len++;
}
fi = open(filename, O_WRONLY | O_APPEND);
wi = write(fi, text_content, len);
if (fi == -1 || wi == -1)
return (-1);
close(fi);
return (1);
}
