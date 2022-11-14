#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int length_name = 0, length_owner = 0, x;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[length_name])
		length_name++;
	while (owner[length_owner])
		length_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpyname = malloc(lenght_name + 1);
	if (cpyname == NULL)
		return (NULL);
	for (x = 0; name[x]; x++)
		cpyname[x] = name[x];
	cpyname[x] = '\0';

	cpyowner = malloc(length_owner + 1);
	if (cpyowner == NULL)
		return (NULL);
	for (x = 0; owner[x]; x++)
		cpyowner[x] = owner[x];
	cpyowner[x] = '\0';

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}
