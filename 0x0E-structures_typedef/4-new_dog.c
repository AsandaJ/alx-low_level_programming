#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of the string being returned
 * @s: evaluation of string
 *
 * Return: Print dog info
 */
int _strlen(char *s)
{
        int k;

        k = 0;

        while (s[k] != '\0')
        {
                k++;
        }

        return (k);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
        int en, k;

        en = 0;

        while (src[en] != '\0')
        {
                en++;
        }

        for (k = 0; k < en; k++)
        {
                dest[k] = src[k];
        }
        dest[k] = '\0';

        return (dest);
}

/**
 * new_dog - ompilation of new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *dog;
        int en1, en2;

        en1 = _strlen(name);
        en2 = _strlen(owner);

        dog = malloc(sizeof(dog_t));
        if (dog == NULL)
                return (NULL);

        dog->name = malloc(sizeof(char) * (en1 + 1));
        if (dog->name == NULL)
        {
                free(dog);
                return (NULL);
        }
        dog->owner = malloc(sizeof(char) * (en2 + 1));
        if (dog->owner == NULL)
        {
                free(dog);
                free(dog->name);
                return (NULL);
        }
        _strcpy(dog->name, name);
        _strcpy(dog->owner, owner);
        dog->age = age;

        return (dog);
}
