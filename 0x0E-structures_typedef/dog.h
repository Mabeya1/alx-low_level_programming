#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: This structure defines a dog's basic information, including its
 * name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - Initialize a dog structure
 * @d: Pointer to the dog structure to initialize
 * @name: Pointer to the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the dog's owner's name
 *
 * Description: This function initializes a dog structure with the provided
 * name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Print information about a dog
 * @d: Pointer to the dog structure to print
 *
 * Description: This function prints the information about a dog, including its
 * name, age, and owner.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Create a new dog structure
 * @name: Pointer to the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the dog's owner's name
 *
 * Return: Pointer to the newly created dog structure
 *
 * Description: This function creates a new dog structure with the provided
 * name, age, and owner, and returns a pointer to it.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Free memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees the memory allocated for a dog structure.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copy a string
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to the destination buffer
 *
 * Description: This function copies the string from src to dest.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Get the length of a string
 * @s: Input string
 *
 * Return: Length of the string
 *
 * Description: This function calculates the length of a string.
 */
int _strlen(char *s);

#endif
