#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - eads a text file and prints it to the POSIX standard output
 * @filename: test file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *	- if the file can not be opened or read, return 0
 *	- if filename is NULL return 0
 *	- if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declare and initialize varialbe */
	int file_desc = 0;
	unsigned long int nb_byte_read = 0;
	unsigned long int nb_print_char = 0;
	char *text_buffer = NULL;

	/* check special case (if filename is NULL return 0) */
	if (filename == NULL)
		return (0);

	/* try to open the file (if the file can not be opened, return 0)*/
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	/* allocate memory for buffer */
	text_buffer = malloc(letters * sizeof(char));
	/* if error close document and free memory */
	if (text_buffer == NULL)
	{
		close(file_desc);
		free(text_buffer);
		return (0);
	}

	/* try to read the file*/
	nb_byte_read = read(file_desc, text_buffer, letters);

	if (nb_byte_read > 0)
		nb_print_char = write(STDOUT_FILENO, text_buffer, nb_byte_read);

	/* After manipualtion close document and free memmory */
	close(file_desc);
	free(text_buffer);

	/* if write fails or does not write the expected amount of bytes, return 0 */
	if (nb_byte_read != nb_print_char)
		return (0);
	else
		return (nb_print_char);
}
