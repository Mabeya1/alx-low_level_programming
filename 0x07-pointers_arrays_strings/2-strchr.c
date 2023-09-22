#include <stdio.h>
#include <string.h>
/**
 * _strchr - Locates the first occurrence of c in s.
 *
 * @s: String to be searched for c.
 * @c: Character to be located in c.
 *
 * Return: First instance of c, or else NULL
 */
char *_strchr(char *s, char c)
{
	int k;

	k = 0;

	for (; *(s + k) ;)

		if (*(s + k) == c)
			return (s + k);
	k++;
	return (NULL);
}
