#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - About dog informations
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo owner
 *
 * Description: struct. about doggo
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initialize dog structure
 * Description : initialize dog structure
 * @d: pointer to the structure dog
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo owner
 *
 * Return:	/
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - initialize a variable of type struct dog
 * Description :  initialize a variable of type struct dog
 * @d: pointer to the structure dog
 * Return:	/
 */
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * new_dog - create new dogs
 * Description : create new dog with typedef
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo owner
 * Return:	/
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - free (memory) dogs
 * Description :  free memory use by dogs structures
 * @d: structure dog
 * Return:	/
 */
 void free_dog(dog_t *d);

#endif /* _DOG_H_ */
