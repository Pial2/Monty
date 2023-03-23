#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;
	stack_t *tmp = *head, *aux;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		copy = copy->next;
		tmp = tmp->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
