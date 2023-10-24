#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: first node in the linked list
 * @index: number of nodes to return
 * Return: pointer to the nth nodes
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
