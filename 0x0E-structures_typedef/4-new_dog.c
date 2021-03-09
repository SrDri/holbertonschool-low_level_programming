#include "dog.h"
#include <stdio.h>

/**
 * new_dog - function
 * @name: char name
 * @age: float age
 * @owner: char owner
 * Return: dogt
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
	}
	i++;
	dog->name = malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	j++;
	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	for (x = 0; x < j; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
