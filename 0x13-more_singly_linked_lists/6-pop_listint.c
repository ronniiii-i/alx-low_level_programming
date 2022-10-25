#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to head of linked list
 * Return: deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (data);
}
