#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the diags sum
 * @a: input pointer
 * @size: size of array
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	unsigned int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i < size * size; i += size - 1)
		sum2 += a[i];
	printf("%d, %d \n", sum1, sum2);
}
