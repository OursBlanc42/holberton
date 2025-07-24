#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* close_file - Close file from file descriptor
* @file_desc: File descriptor
* Return: Nothing (void)
*/
void close_file(int file_desc)
{
	if (close(file_desc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(100);
	}
}

/**
* error98 - Display error 98
* Description : file_from not exist or cannot be read : exit with code 98
* @filename: File name cause the error
* Return: Nothing (void)
*/
void error98(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}


/**
* error99 - Display error 99
* Description : file_to cant be created or writing fail : exit with code 99
* @filename: File name cause the error
* Return: Nothing (void)
*/
void error99(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}


/**
* copy_content - Copies the content from one file descriptor to another
* Description :
* Read the file in chunks of 1024 bytes (buffer size)
* The file offset automatically advances after each read
* Repeat the process until the number of bytes read is less than the
* buffer size
*
* @file_from: Source filename
* @file_desc_from: Source file descriptor.
* @file_to: Destination filename
* @file_desc_to: Destination file descriptor.
* @buffer: Buffer for data
* @buffer_size: Size of the buffer.
* Return : nothing (void)
*/
void subfunc_copy(int file_desc_from, int file_desc_to, char *buffer,

ssize_t buffer_size, char *file_from, char *file_to)
{
	ssize_t nb_byte_read = 0;
	ssize_t nb_print_char = 0;

	while ((nb_byte_read = read(file_desc_from, buffer, buffer_size)) > 0)
	{
		/* error check for read */
		if (nb_byte_read == -1)
			error98(file_from);

		nb_print_char = write(file_desc_to, buffer, nb_byte_read);

		/* error check for write */
		if (nb_print_char == -1 || nb_print_char != nb_byte_read)
			error99(file_to);
	}

	/* If read returned -1 outside the loop */
	if (nb_byte_read == -1)
		error98(file_from);
}


/**
* main - copies the content of a file to another file
* Description : This program is an ersatz of the 'cp' command
* Error code :
* - If the number of arguments is incorrect : exit with code 97
* - If file_from not exist or cannot be read : exit with code 98
* - If file_to cant be created or writing to it fail : exit with code 99
* - If a file descriptor cannot be closed, exit with code 100
* @argc: number of argument passed in the function
* @argv: array of arguments
* Return: always 0
*/
int main(int argc, char **argv)
{
	/* declare variables */
	char *file_from = NULL;
	char *file_to = NULL;
	int file_desc_from = -1, file_desc_to = -1;
	const ssize_t buffer_size = 1024;
	char text_buffer[1024];

	/* Check the number of argument */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* Gets the names of the two files and initializes them in variables */
	file_from = argv[1];
	file_to = argv[2];

	/* try to open the source file */
	file_desc_from = open(file_from, O_RDONLY);
	if (file_desc_from == -1)
		error98(file_from);

	/* Try to open destination file */
	file_desc_to = open(file_to, O_WRONLY | O_TRUNC);

	if (file_desc_to == -1)		/* If the file doesn't exist, create it */
		file_desc_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_desc_to == -1)		/* error check */
		error99(file_to);

	/* Call subfunction */
	subfunc_copy(file_desc_from, file_desc_to, text_buffer, buffer_size,
	file_from, file_to);

	/* close each document */
	close_file(file_desc_from);
	close_file(file_desc_to);

	return (0);
}
