#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog with a name, age, and owner
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

/**
 * dog_t - new name for struct dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void print_dog(dog_t *d);
void init_dog(dog_t *d, char *name, float age, char *owner);

#endif
