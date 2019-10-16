#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[]={0,1,2};
	int* p = a;
	printf("\n\n\nint a[]={0,1,2};\n");
	printf("int* p = a;\n");
	printf("p + 0: %p     a + 0: %p     &a[0]: %p \n", p + 0, a + 0, &a[0]);
	printf("p + 1: %p     a + 1: %p     &a[1]: %p \n", p + 1, a + 1, &a[1]);
	printf("p + 2: %p     a + 2: %p     &a[2]: %p \n", p + 2, a + 2, &a[2]);
	printf("*(p + 0): %d     p[0]: %d     a[0]: %d\n", *(p + 0), p[0], a[0]);
	printf("*(p + 1): %d     p[1]: %d     a[1]: %d\n", *(p + 1), p[1], a[1]);
	printf("*(p + 2): %d     p[2]: %d     a[2]: %d\n\n\n", *(p + 2), p[2], a[2]);

	int b[3] = {3, 4, 5};

	int** pp = malloc(sizeof(int*) * 2);
	pp[0] = malloc(sizeof(int)*3);
	pp[1] = malloc(sizeof(int)*3);
	pp[0] = a;
	pp[1] = b;
	printf("     pp + 0: %p        b: %p\n",     pp, b);
	printf("    *pp + 0: %p     b[0]: %d\n",    *pp, a[0]);
	printf("   **pp + 0: %d  b[0][0]: %d\n\n", **pp, b[0]);
	printf("   *(pp + 0): %p\n", *(pp+ 0));
	printf("   *(pp + 1): %p\n", *(pp+ 1));
	printf(" *(*(pp + 0) + 0): %d     pp[0][0]: %d\n", *(*(pp + 0) + 0), pp[0][0]);
	printf(" *(*(pp + 0) + 1): %d     pp[0][1]: %d\n", *(*(pp + 0) + 1), pp[0][1]);
	printf(" *(*(pp + 0) + 2): %d     pp[0][2]: %d\n", *(*(pp + 0) + 2), pp[0][2]);
	printf(" *(*(pp + 1) + 0): %d     pp[1][0]: %d\n", *(*(pp + 1) + 0), pp[1][0]);
	printf(" *(*(pp + 1) + 1): %d     pp[1][1]: %d\n", *(*(pp + 1) + 1), pp[1][1]);
	printf(" *(*(pp + 1) + 2): %d     pp[1][2]: %d\n", *(*(pp + 1) + 2), pp[1][2]);
	return (0);
}
