#include "lists.h"
/**
 * listint_len - function that returns the number of elements in listint_t
 * @h: pointer to the head of listint_t
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t q;

	for (q = 0; h != NULL; q++)
	{
		h = h->next;
	}
	return (q);
}
