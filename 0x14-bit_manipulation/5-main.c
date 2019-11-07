#include <stdio.h>
#include <limits.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    n = flip_bits(0, 0);
    printf("%u\n", n);
    n = flip_bits(UINT_MAX, 0);
    printf("%u\n", n);
    n = flip_bits(UINT_MAX, UINT_MAX);
    printf("%u\n", n);
    n = flip_bits(1, 0);
    printf("%u\n", n);
    n = flip_bits(0, 1);
    printf("%u\n", n);
    n = flip_bits(UINT_MAX, UINT_MAX / 2);
    printf("%u\n", n);
    return (0);
}
