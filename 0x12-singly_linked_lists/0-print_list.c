#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to input parameter
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodelen;

	nodelen = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodelen++;
	}
	return (nodelen);
}
