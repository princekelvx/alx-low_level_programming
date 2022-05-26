#include "lists.h"

/**
 * pop_listint - deletes the first element of a linked list
 * @head: pointer to list
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head = NULL)
		return (0);

	temp = *head;
	*head = tp->next;
	data = temp->n;
	free(temp);
	return (data);
}
