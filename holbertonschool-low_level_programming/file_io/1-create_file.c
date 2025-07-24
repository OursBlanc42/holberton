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
* create_file - create_file
* Description :
*	- Create a file with permissions rw-------
*	- If the file already exists do not change the permissions.
*	- If file already exist truncate it. (delete data)
*	- If filename is NULL return -1
*	- If text_content is NULL create an empty file
* @filename: test file to read
* @text_content: is a NULL terminated string to write to the file
* Return:
*	1 on success
*	-1 on failure (file can not be created or written, write “fails”...)
*/
int create_file(const char *filename, char *text_content)
{
	/* declare and initialize varialbe */
	int file_desc = 0;
	unsigned long int nb_print_char = 0;

	/* check special case (if filename is NULL return -1) */
	if (filename == NULL)
		return (-1);

	/* try to open the file (if the file can not be opened, return -1)*/
	/* the open function will create the file if file doesnt exist */
	/* O_TRUNC will wipe the data if the file exist  */
	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	/* If text_content = NULL ; the file stay empty */
	if (text_content == NULL)
		return (1);

	/* write data in file */
	nb_print_char = write(file_desc, text_content, _strlen(text_content));

	/* if write display more than 0 char on screen is success and return 1 */
	if (nb_print_char > 0)
	{
		return (1);
	}

	return (-1);
}



