#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the listint_t structure
 * Return: nil
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;
	while (head)
	{
		temp2 = temp->head;
		free(temp);
		temp = temp2;
	}
}
