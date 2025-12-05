#include "lists.h"
#include<stdio.h>

/**
 * print_list - function to print all elements of list_t
 * @h: pointer to a singly linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		len++;
	}
	return (len);
}
