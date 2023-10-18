#include "monty.h"

/**
* f_stack - function that displays the top element of the stack
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}

/**
* free_stack - function that deallocates memory used by a doubly linked list
* @head: head pointer to the stack
*
* Return: nothing
*/
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
