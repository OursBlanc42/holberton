#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - len of a string
 * Description: returns the length of a string
 * @s : string to check
 * Return: length of a string
 */

int _strlen(char *s)
{
	/* declare and initialize variable */
	int n = 0;

	/* loop through chain until null charactere ('\0') */
	while (s[n] != '\0')
	{
		/* increment n for each character founded */
		n++;
	}

	return (n);
}

/**
 * _strcpy - copy strings
 * Description: copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: buffer
 * @src: source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	/* declare variable */
	int i;
	int end = 0;

	/* loop through source chain until null charactere ('\0') */
	while (src[end] != '\0')
	{
		/* increment end for each character founded */
		end++;
	}

	for (i = 0 ; i < end && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* add null character */
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create new dogs
 * Description :  create new dog with typedef
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo owner
 * Return:	/
 */
dog_t *new_dog(char *name, float age, char *owner)
{	/* declare and initialize variable */
	dog_t *ptr;

	/* check special case */
	if ((name == NULL) || (owner == NULL))
		return (NULL);

	ptr = malloc(sizeof(dog_t));	/* memory allocation */

	/* check if ptr is a valid pointer after malloc */
	if (ptr == NULL)
		return (NULL);

	/* allocate memory, copy string and apply it*/
		/* +1 cause it's string and end by \0 */
	ptr->name = malloc(_strlen(name) + 1);
	if (ptr->name == NULL)
	{ /* if fail free allocated memory and return NULL */
		free(ptr);
		return (NULL);
	}
	else
		_strcpy(ptr->name, name);

	/* allocate memory, copy string and apply it*/
		/* +1 cause it's string and end by \0 */
	ptr->owner = malloc(_strlen(owner) + 1);
	if (ptr->owner == NULL)
	{ /* if fail free allocated memory and return NULL */
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	else
		_strcpy(ptr->owner, owner);

	ptr->age = age;		/* apply age */

	return (ptr);
}
