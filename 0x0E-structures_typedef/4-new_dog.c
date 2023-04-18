#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int p, pname, powner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (pname = 0; name[pname]; pname++)
		;

	for (powner = 0; owner[powner]; powner++)
		;

	p_dog->name = malloc(pname + 1);
	p_dog->owner = malloc(powner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (p = 0; p < pname; p++)
		p_dog->name[p] = name[p];
	p_dog->name[p] = '\0';

	p_dog->age = age;

	for (p = 0; p < powner; p++)
		p_dog->owner[p] = owner[p];
	p_dog->owner[p] = '\0';

	return (p_dog);
}
