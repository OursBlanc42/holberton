#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* _strlen - Calculate the length of a string
* @str: string to check
* Return: length of a string
*/
int _strlen(char *str)
{
	/* declare and initialize variable */
	int len = 0;

	/* loop through chain until null charactere ('\0') */
	while (str[len] != '\0')
	{
		/* increment n for each character founded */
		len++;
	}

	return (len);
}

/**
* append_text_to_file - appends text at the end of a file.
* @filename: name of the file
* @text_content: is a NULL terminated string to write
* Return:
*	1 on success
*	-1 on failure (file can not be created or written, write “fails”...)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	/* declare and initialize varialbe */
	int file_desc = 0;
	ssize_t nb_print_char = 0; /* ssize_t : type to manipulate bytes */

	/* check special case (if filename is NULL return -1) */
	if (filename == NULL)
		return (-1);

	/* try to pen the file . With flag O_APPEND go the end of the file */
	file_desc = open(filename, O_WRONLY | O_APPEND);

	/* in case of error return -1 */
	if (file_desc == -1)
		return (-1);

	/* If text_content == NULL */
	/* Return 1 if file exists, -1 if not or if no permissions; */
	if (text_content == NULL)
	{
		if (file_desc == -1)
		{
			return (-1);
		}
		else
		{
			close(file_desc);
			return (1);
		}
	}

	/* write data in file */
	nb_print_char = write(file_desc, text_content, _strlen(text_content));

	close(file_desc);

	/* Check if write operation was successful */
	if (nb_print_char == -1)
		return (-1);

	return (1);
}
