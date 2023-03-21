#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure and initializes its fields
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to the new dog structure, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *new_name, *new_owner;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    new_name = malloc(sizeof(char) * (_strlen(name) + 1));
    if (new_name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
    if (new_owner == NULL)
    {
        free(new_name);
        free(new_dog);
        return (NULL);
    }

    _strcpy(new_name, name);
    _strcpy(new_owner, owner);

    new_dog->name = new_name;
    new_dog->age = age;
    new_dog->owner = new_owner;

    return (new_dog);
}

/**
 * _strlen - computes the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        ;
    return (i);
}

/**
 * _strcpy - copies a string to a buffer
 * @dest: pointer to the buffer
 * @src: pointer to the source string
 *
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';

    return (dest);
}
