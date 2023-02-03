#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head = NULL;
	node = _add_node(&head, 9);
	node->next = _add_node(&head, 6);
	print_listint_safe(head);
	n = free_listint_safe(&head);
	printf("%lu\n%p\n", n, (void *)head);
	return (0);
}
