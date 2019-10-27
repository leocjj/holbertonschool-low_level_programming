#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * concat - Function that concatenate two strings.
 * @s1: string to which it should be added.
 * @s2: String to be add.
 * Return: String already concatenate
 */

char *concat(char *s1, char *s2)
{
        int size_of_s1 = 0, size_of_s2 = 0, j = 0;

        if (s1 == NULL)
                return (NULL);
        else
                while (s1[size_of_s1] != '\0')
                        size_of_s1++;

        if (s2 == NULL)
                return (s1);
        else
                while (s2[size_of_s2] != '\0')
                        size_of_s2++;

        for (j = 0; j < size_of_s2; j++)
                s1[size_of_s1 + j] = s2[j];

        s1[size_of_s1 + size_of_s2 + 1] = '\0';
        return (s1);
}
