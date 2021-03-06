#include "lists.h"
/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head:list
 * @number:value
 * Return: Always 0.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = NULL, *tmp = NULL, *aux = NULL;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = number;
	if ((*head) == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	tmp = *head;
	if ((*head)->n  > number)
	{
		node->next = tmp;
		*head = node;
		return (node);
	}

	while (tmp)
	{
		if (tmp->next && tmp->next->n > number)
		{
			aux = tmp->next;
			node->next = aux;
			tmp->next = node;
			return (node);
		}
		tmp = tmp->next;
		if (tmp->next == NULL)
		{
			break;
		}

	}
		return (add_nodeint_end(&tmp, number));
}
