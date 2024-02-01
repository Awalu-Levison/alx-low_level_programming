#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure of a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Person in possession of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog - Structure of new dog
 * dog_t - New dog
 * @name: The name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
