#include <stddef.h>
#include <stdio.h>
#include "sort.h"

/**
 * swap_func - swaps the two nodes of doubly linked list.
 * @head1: a pointer to the head node of the doubly linked list.
 * @node1: a pointer to the first node of to swap
 * @node2: a pointer to the second node to swap
 */

void swap_func(listint_t **head1, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if(node2->next != NULL)
	{
		node->next->prev = *node1;
	}
	node2->prev = (*node1)->prev;
	node->next = *node1;
	if ((*node1)->prev != NULL)
	{
		(*node1)->prev->next = node2;
	}
	else
	{
		*head = node2;
	}
	(*node1)->prev = node2;
	*node1 = node2->prev
}

/**
 * insertion_sort_list - sorts a doubly linked list with insertion sort
 * @list: A pointer to the head of a doubly linked list
 * Description: Prints the list after each step
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *back, *temp, *front;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	for (temp = (*list)->next; temp != NULL; temp = front)
	{
		front = temp->next;
		back = temp->prev;

		while (insert != NULL && temp->n < back->n)
		{
			swap-func(list, &back, temp);
			print_list((condt listint_t *)*list);
		}
	}
}
