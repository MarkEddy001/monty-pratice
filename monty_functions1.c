#include "monty.h"

/**
* f_push - function responsible for adding new node to the stack.
* @head: double head pointer to the stack
* @counter: the line count
*
* Return: nothing
*/
void f_push(stack_t **head, unsigned int counter)
{
	int index1, m = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			m++;
		for (; bus.arg[m] != '\0'; m++)
		{
			if (bus.arg[m] > 57 || bus.arg[m] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	index1 = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, index1);
	else
		addqueue(head, index1);
}
