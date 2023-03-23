#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
void f_mod(stack_t **head, unsigned int counter)
int main(int argc, char *argv[])
{
	stack_t *h;
	int len = 0, aux;
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	h = *head;
	while (h)
	if (argc != 2)
	{
		h = h->next;
		len++;
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (len < 2)
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	while (read_line > 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
	free_stack(stack);
	fclose(file);
return (0);
}
