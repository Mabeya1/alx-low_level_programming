/**
 * _memcpy - A function that copies n bytes from src.
 * @src: The memory area to be copied from.
 * @dest: Memory area to be copied to.
 * @n: The number of bytes to be copied.
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int m;

	m = 0;

	for (; m < n; m++)
		dest[m] = src[m];
	return (dest);
}
