#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int holder;

	if (head == NULL || *head == NULL)
	return (0);

	holder = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (holder);
}
