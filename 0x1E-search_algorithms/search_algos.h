#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#define __local __attribute__((weak))

/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* STRUCTS */
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* UTILITIES */
listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);
void print_list(const listint_t *list);

int exponential_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

/**
 * print_array - prints an array
 * @array: array to print
 * @start: position to start printing
 * @stop: position to stop
 */
__local void print_array(int *array, int start, int stop)
{
	int i = start;

	for (; i < stop; ++i)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

#endif
