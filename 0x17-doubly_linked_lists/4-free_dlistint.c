#include "lists.h"

/**
 *free_dlistint - frees a list
 *@head: pointer to the list
 *Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}