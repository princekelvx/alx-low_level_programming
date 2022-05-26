#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the listint_t structure
 * Return: nil
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
