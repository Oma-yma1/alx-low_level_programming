#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - reads file and prints it to the POSIX output
 * @filename: text file
 *@letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fi;
ssize_t re;
ssize_t wi;
char *buff;
if (filename == 0)
return (0);
fi = open(filename, O_RDONLY);
if (fi < 0)
return (0);
buff = malloc(sizeof(char) * letters);
re = read(fi, buff, letters);
wi = write(STDOUT_FILENO, buff, re);
free(buff);
close(fi);
return (wi);
}
