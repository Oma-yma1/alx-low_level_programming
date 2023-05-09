#include "main.h"
#include <stdio.h>
#include <fcntl.h>
char *buff_creat(char *fi);
void fi_closing(int fd);
/**
 * buff_creat - creat buffer
 * @file: file
 * Return: buffer
 */
char *buff_creat(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
 * fi_closing - close file
 * @fd: file
 */
void fi_closing(int fd)
{
int d;
d = close(fd);
if (d == -1)
{
dprintf(STDERR_FILENO, "Error/ Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - copies the content of a file ti onother file
 *
 * @argv: pointer
 * @argc: argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
int file_from, file_to, re, wr;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = buff_creat(argv[2]);
file_from = open(argv[1], O_RDONLY);
re = read(file_from, buffer, 1024);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (file_from == -1 || re == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
wr = write(file_to, buffer, re);
if (file_to == -1 || wr == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
re = read(file_from, buffer, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);
} while (re > 0);
free(buffer);
fi_closing(file_from);
fi_closing(file_to);
return (0);
}
