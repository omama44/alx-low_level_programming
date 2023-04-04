#include <stdio.h>
#include "lists.h"

/**
 * print listint - print  all of the elements of a linked list
 * @h: head of link list
 *
 * Return: the number of nodes of the linked list
 */

size_t print_listint(const listint_t *h)
{
	int co = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d/n", h->n);
			h = h->next;
			co++;
		}
	}
	return (co);
}
