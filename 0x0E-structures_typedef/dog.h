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
 * dog_t -Defining new dog type
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
