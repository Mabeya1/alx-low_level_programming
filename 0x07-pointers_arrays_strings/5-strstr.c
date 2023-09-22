/**
 * _strstr - Function that  loctaes a substring
 *
 * @haystack: The string where substring needle is searched
 * @needle: The substring to be located
 *
 * Return: pointer to the beginning of needle
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *occur, *tNeedle;

	if (!*needle)
		return (haystack);
	for (; *haystack ;)
	{
		if (*haystack == *needle)
		{
			occur = haystack;
			tNeedle = needle;
			for (; *tNeedle ;)
			{
				if (*haystack++ != *tNeedle++)
				{
					haystack = occur;
					break;
				}
			}
			if (occur != haystack)
				return (occur);
		}
		haystack++;
	}
	return (0);
}
