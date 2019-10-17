#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings, null terminated
 * @s1: string to cancatenate.
 * @s2: string to cancatenate.
 * @n: bytes of s2 to concatenate.
 *
 * Return: pointer to a newly allocated space in memory,
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, size1 = 0, size2 = 0;
	char *p = NULL;

	if (s1 != NULL)
		while (*(s1 + size1) != '\0')
			size1++;
	if (s2 != NULL)
		while (*(s2 + size2) != '\0')
			size2++;
	if (n < size2)
		size2 = n;

	p = (char *) malloc((size1 + size2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(p + i) = *(s1 + i);
	for (i = 0; i < size2; i++)
		*(p + size1 + i) = *(s2 + i);

	*(p + size1 + size2) = '\0';

	return (p);
}
