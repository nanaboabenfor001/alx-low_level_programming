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
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
