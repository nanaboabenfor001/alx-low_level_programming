#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct dog defines a dog's name, age and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
