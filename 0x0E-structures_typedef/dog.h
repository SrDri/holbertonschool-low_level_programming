#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a dog data structure
 * @name: dog's name, string
 * @age: dog's age, float
 * @owner: dog Owner's name, string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*Punto 3*/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
