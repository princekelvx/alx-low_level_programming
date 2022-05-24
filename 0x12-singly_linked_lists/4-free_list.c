#include "lists.h"

/**
 * free_list - A function that frees all elements in a linked list
 * @head: first element in said linked list
 * Return: Nil
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free (head);
}
